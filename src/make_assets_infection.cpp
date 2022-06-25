/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <shared/system/debug.h>
#include <shared/system/string.h>
#include <shared/kernel.h>
#include <shared/components/assetsmanager.h>
#include <shared/components/storage.h>
#include <client/loading_tools.h>

#include <cstdlib>

#define CREATE_SPRITE_PATH(path, packageid, name, image, x, y, w, h) {\
	CAsset_Sprite* pSprite = pKernel->AssetsManager()->NewAsset_Hard<CAsset_Sprite>(&path, packageid);\
	pSprite->SetName(name);\
	pSprite->SetImagePath(image);\
	pSprite->SetX(x);\
	pSprite->SetY(y);\
	pSprite->SetWidth(w);\
	pSprite->SetHeight(h);\
}

#define CREATE_TILINGMATERIAL_CONDITION_INDEX(relx, rely, index) {\
	CSubPath CondPath = CAsset_TilingMaterial::SubPath_RuleCondition(RulePath.GetId(), pKernel->AssetsManager()->AddSubItem_Hard(MaterialPath, RulePath, CAsset_TilingMaterial::TYPE_RULE_CONDITION));\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_TYPE, CAsset_TilingMaterial::CONDITIONTYPE_INDEX);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_VALUE, index);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSX, relx);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSY, rely);\
}

#define CREATE_TILINGMATERIAL_CONDITION_NOTINDEX(relx, rely, index) {\
	CSubPath CondPath = CAsset_TilingMaterial::SubPath_RuleCondition(RulePath.GetId(), pKernel->AssetsManager()->AddSubItem_Hard(MaterialPath, RulePath, CAsset_TilingMaterial::TYPE_RULE_CONDITION));\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_TYPE, CAsset_TilingMaterial::CONDITIONTYPE_NOTINDEX);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_VALUE, index);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSX, relx);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSY, rely);\
}

#define CREATE_TILINGMATERIAL_CONDITION_NOBORDER(relx, rely) {\
	CSubPath CondPath = CAsset_TilingMaterial::SubPath_RuleCondition(RulePath.GetId(), pKernel->AssetsManager()->AddSubItem_Hard(MaterialPath, RulePath, CAsset_TilingMaterial::TYPE_RULE_CONDITION));\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_TYPE, CAsset_TilingMaterial::CONDITIONTYPE_NOBORDER);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSX, relx);\
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(MaterialPath, CondPath, CAsset_TilingMaterial::RULE_CONDITION_RELPOSY, rely);\
}

int main(int argc, char* argv[])
{
	CSharedKernel* pKernel = new CSharedKernel();
	if(!pKernel->Init(argc, (const char**) argv))
	{
		debug::ErrorStream("Kernel") << "unable to initialize shared kernel" << std::endl;
		exit(EXIT_FAILURE);
	}
	
	int PackageId = -1;
	
	/* UNIV TEEWORLDS */
	PackageId = pKernel->AssetsManager()->NewPackage("infectionX");
	pKernel->AssetsManager()->SetPackageAuthor(PackageId, "ErrorDreemurr");
	pKernel->AssetsManager()->SetPackageCredits(PackageId, "TeeDream");
	pKernel->AssetsManager()->SetPackageLicense(PackageId, "CC-BY-SA 3.0");
	pKernel->AssetsManager()->SetPackageVersion(PackageId, "0.0.1");
	
	CAssetPath ImageZonesPath = CreateNewImage(pKernel, PackageId, "zones", "images/univ_infection/zones.png", CStorage::TYPE_ALL, 16, 16, true, 0);
	CAssetPath ImageEntitiesPath = CreateNewImage(pKernel, PackageId, "entities", "images/univ_infection/entities.png", CStorage::TYPE_ALL, 4, 4);
	pKernel->AssetsManager()->SetAssetValue_Hard<int>(ImageEntitiesPath, CSubPath::Null(), CAsset_Image::TEXELSIZE, 768);
	
	CAssetPath TeeWorldsZoneTypePath;
	int GroupId_Physics = -1;
	int GroupId_Death = -1;

	//Zones
	{
		CSubPath SubPath;
		
		CAsset_ZoneType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_ZoneType>(&TeeWorldsZoneTypePath, PackageId);
		pAsset->SetName("teeworlds");
		pAsset->SetImagePath(ImageZonesPath);
		
		GroupId_Physics = pAsset->AddGroup();
		GroupId_Death = pAsset->AddGroup();
		
		pAsset->SetGroup(CAsset_ZoneType::SubPath_Group(GroupId_Physics), "Physics");
		pAsset->SetGroup(CAsset_ZoneType::SubPath_Group(GroupId_Death), "Death");
		
		SubPath = CAsset_ZoneType::SubPath_Index(pAsset->AddIndex());
		pAsset->SetIndexTitle(SubPath, "Air");
		pAsset->SetIndexColor(SubPath, vec4(1.0f, 1.0f, 1.0f, 0.0f));
		pAsset->SetIndexGroup(SubPath, GroupId_Physics);
		
		SubPath = CAsset_ZoneType::SubPath_Index(pAsset->AddIndex());
		pAsset->SetIndexTitle(SubPath, "Hookable Ground");
		pAsset->SetIndexColor(SubPath, 1.0f);
		pAsset->SetIndexBorderIndex(SubPath, 1);
		pAsset->SetIndexGroup(SubPath, GroupId_Physics);
		
		SubPath = CAsset_ZoneType::SubPath_Index(pAsset->AddIndex());
		pAsset->SetIndexTitle(SubPath, "Death");
		pAsset->SetIndexColor(SubPath, 1.0f);
		pAsset->SetIndexBorderIndex(SubPath, 2);
		pAsset->SetIndexBorderColor(SubPath, vec4(1.0f, 0.0f, 0.0f, 1.0f));
		pAsset->SetIndexGroup(SubPath, GroupId_Death);
		
		SubPath = CAsset_ZoneType::SubPath_Index(pAsset->AddIndex());
		pAsset->SetIndexTitle(SubPath, "Unhookable Ground");
		pAsset->SetIndexColor(SubPath, 1.0f);
		pAsset->SetIndexBorderIndex(SubPath, 1);
		pAsset->SetIndexBorderColor(SubPath, vec4(149.0f/255.0f, 190.0f/255.0f, 222.0f/255.0f, 1.0f));
		pAsset->SetIndexGroup(SubPath, GroupId_Physics);
	}
	//EntityType, Blue Spawn
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoZombieSpawn", ImageEntitiesPath, 1, 3, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("infZombieSpawn");
		pAsset->SetCollisionRadius(64.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Red Spawn
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoHumanSpawn", ImageEntitiesPath, 2, 3, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("infHumanSpawn");
		pAsset->SetCollisionRadius(64.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Shotgun
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoShotgun", ImageEntitiesPath, 0, 2, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twShotgun");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Grenade
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoGrenade", ImageEntitiesPath, 1, 2, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twGrenade");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Rifle
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoRifle", ImageEntitiesPath, 2, 2, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twRifle");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Gun
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoGun", ImageEntitiesPath, 0, 1, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twGun");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Hammer
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoHammer", ImageEntitiesPath, 1, 1, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twHammer");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Ninja
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoNinja", ImageEntitiesPath, 2, 1, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twNinja");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Red Flag
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoRedFlag", ImageEntitiesPath, 3, 0, 1, 2);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twRedFlag");
		pAsset->SetCollisionRadius(42.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Blue Flag
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoBlueFlag", ImageEntitiesPath, 3, 2, 1, 2);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twBlueFlag");
		pAsset->SetCollisionRadius(42.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Heart
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoHeart", ImageEntitiesPath, 0, 0, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twHealth");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	//EntityType, Armor
	{
		CAssetPath GizmoPath;
		CAssetPath AssetPath;
		
		CREATE_SPRITE_PATH(GizmoPath, PackageId, "gizmoArmor", ImageEntitiesPath, 1, 0, 1, 1);
		
		CAsset_EntityType* pAsset = pKernel->AssetsManager()->NewAsset_Hard<CAsset_EntityType>(&AssetPath, PackageId);
		pAsset->SetName("twArmor");
		pAsset->SetCollisionRadius(20.0f);
		pAsset->SetGizmoPath(GizmoPath);
	}
	
	pKernel->AssetsManager()->Save_AssetsFile_SaveDir(PackageId);
	
	/* SHUTDOWN */
	pKernel->Shutdown();
	delete pKernel;

	exit(EXIT_SUCCESS);
}
