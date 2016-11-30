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

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#include <generated/assets/skeleton.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_Skeleton::CBone::CBone()
{
	m_Length = 32.0f;
	m_Anchor = 0.0f;
	m_Translation = 0.0f;
	m_Scale = 1.0f;
	m_Angle = 0.0f;
	m_Color = 1.0f;
}


void CAsset_Skeleton::CBone::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_Skeleton::CBone& SysType)
{
	SysType.m_Length = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Length);
	SysType.m_Anchor = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Anchor);
	SysType.m_Translation.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Translation.m_X);
	SysType.m_Translation.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Translation.m_Y);
	SysType.m_Scale.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Scale.m_X);
	SysType.m_Scale.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Scale.m_Y);
	SysType.m_Angle = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Angle);
	SysType.m_Name.copy(pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name));
	SysType.m_Color = pLoadingContext->ArchiveFile()->ReadColor(TuaType.m_Color);
}

void CAsset_Skeleton::CLayer::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_Skeleton::CLayer& SysType)
{
	SysType.m_Name.copy(pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name));
}

void CAsset_Skeleton::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_Skeleton& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_ParentPath, SysType.m_ParentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultSkinPath, SysType.m_DefaultSkinPath);
	{
		const CAsset_Skeleton::CBone::CTuaType* pData = (const CAsset_Skeleton::CBone::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Bone.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Bone.m_Size);
		SysType.m_Bone.resize(Size);
		for(int i=0; i<Size; i++)
		{
			CAsset_Skeleton::CBone::CTuaType::Read(pLoadingContext, pData[i], SysType.m_Bone[i]);
		}
	}
	
	{
		const CAsset_Skeleton::CLayer::CTuaType* pData = (const CAsset_Skeleton::CLayer::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Layer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Layer.m_Size);
		SysType.m_Layer.resize(Size);
		for(int i=0; i<Size; i++)
		{
			CAsset_Skeleton::CLayer::CTuaType::Read(pLoadingContext, pData[i], SysType.m_Layer[i]);
		}
	}
	
}

void CAsset_Skeleton::CBone::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType& TuaType)
{
	TuaType.m_Length = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Length);
	TuaType.m_Anchor = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Anchor);
	TuaType.m_Translation.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Translation.x);
	TuaType.m_Translation.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Translation.y);
	TuaType.m_Scale.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Scale.x);
	TuaType.m_Scale.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Scale.y);
	TuaType.m_Angle = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Angle);
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	TuaType.m_Color = pLoadingContext->ArchiveFile()->WriteColor(SysType.m_Color);
}

void CAsset_Skeleton::CLayer::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
}

void CAsset_Skeleton::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_ParentPath, TuaType.m_ParentPath);
	pLoadingContext->WriteAssetPath(SysType.m_DefaultSkinPath, TuaType.m_DefaultSkinPath);
	{
		TuaType.m_Bone.m_Size = SysType.m_Bone.size();
		CAsset_Skeleton::CBone::CTuaType* pData = new CAsset_Skeleton::CBone::CTuaType[SysType.m_Bone.size()];
		for(int i=0; i<SysType.m_Bone.size(); i++)
		{
			CAsset_Skeleton::CBone::CTuaType::Write(pLoadingContext, SysType.m_Bone[i], pData[i]);
		}
		TuaType.m_Bone.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Skeleton::CBone::CTuaType)*SysType.m_Bone.size());
		delete[] pData;
	}
	{
		TuaType.m_Layer.m_Size = SysType.m_Layer.size();
		CAsset_Skeleton::CLayer::CTuaType* pData = new CAsset_Skeleton::CLayer::CTuaType[SysType.m_Layer.size()];
		for(int i=0; i<SysType.m_Layer.size(); i++)
		{
			CAsset_Skeleton::CLayer::CTuaType::Write(pLoadingContext, SysType.m_Layer[i], pData[i]);
		}
		TuaType.m_Layer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Skeleton::CLayer::CTuaType)*SysType.m_Layer.size());
		delete[] pData;
	}
}

template<>
int CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case BONE_ARRAYSIZE:
			return GetBoneArraySize();
		case LAYER_ARRAYSIZE:
			return GetLayerArraySize();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case BONE_ARRAYSIZE:
			SetBoneArraySize(Value);
			return true;
		case LAYER_ARRAYSIZE:
			SetLayerArraySize(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
const char* CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, const char* DefaultValue) const
{
	switch(ValueType)
	{
		case BONE_NAME:
			return GetBoneName(SubPath);
		case LAYER_NAME:
			return GetLayerName(SubPath);
	}
	return CAsset::GetValue<const char*>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, const char* Value)
{
	switch(ValueType)
	{
		case BONE_NAME:
			SetBoneName(SubPath, Value);
			return true;
		case LAYER_NAME:
			SetLayerName(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<const char*>(ValueType, SubPath, Value);
}

template<>
float CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const
{
	switch(ValueType)
	{
		case BONE_LENGTH:
			return GetBoneLength(SubPath);
		case BONE_ANCHOR:
			return GetBoneAnchor(SubPath);
		case BONE_TRANSLATION_X:
			return GetBoneTranslationX(SubPath);
		case BONE_TRANSLATION_Y:
			return GetBoneTranslationY(SubPath);
		case BONE_SCALE_X:
			return GetBoneScaleX(SubPath);
		case BONE_SCALE_Y:
			return GetBoneScaleY(SubPath);
		case BONE_ANGLE:
			return GetBoneAngle(SubPath);
	}
	return CAsset::GetValue<float>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, float Value)
{
	switch(ValueType)
	{
		case BONE_LENGTH:
			SetBoneLength(SubPath, Value);
			return true;
		case BONE_ANCHOR:
			SetBoneAnchor(SubPath, Value);
			return true;
		case BONE_TRANSLATION_X:
			SetBoneTranslationX(SubPath, Value);
			return true;
		case BONE_TRANSLATION_Y:
			SetBoneTranslationY(SubPath, Value);
			return true;
		case BONE_SCALE_X:
			SetBoneScaleX(SubPath, Value);
			return true;
		case BONE_SCALE_Y:
			SetBoneScaleY(SubPath, Value);
			return true;
		case BONE_ANGLE:
			SetBoneAngle(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<float>(ValueType, SubPath, Value);
}

template<>
vec2 CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const
{
	switch(ValueType)
	{
		case BONE_TRANSLATION:
			return GetBoneTranslation(SubPath);
		case BONE_SCALE:
			return GetBoneScale(SubPath);
	}
	return CAsset::GetValue<vec2>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value)
{
	switch(ValueType)
	{
		case BONE_TRANSLATION:
			SetBoneTranslation(SubPath, Value);
			return true;
		case BONE_SCALE:
			SetBoneScale(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<vec2>(ValueType, SubPath, Value);
}

template<>
vec4 CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const
{
	switch(ValueType)
	{
		case BONE_COLOR:
			return GetBoneColor(SubPath);
	}
	return CAsset::GetValue<vec4>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value)
{
	switch(ValueType)
	{
		case BONE_COLOR:
			SetBoneColor(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<vec4>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case PARENTPATH:
			return GetParentPath();
		case DEFAULTSKINPATH:
			return GetDefaultSkinPath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case PARENTPATH:
			SetParentPath(Value);
			return true;
		case DEFAULTSKINPATH:
			SetDefaultSkinPath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_Skeleton::AddSubItem(int Type, const CSubPath& SubPath)
{
	switch(Type)
	{
		case TYPE_BONE:
			return AddBone();
		case TYPE_LAYER:
			return AddLayer();
	}
	return -1;
}

int CAsset_Skeleton::DeleteSubItem(const CSubPath& SubPath)
{
	switch(SubPath.GetType())
	{
		case TYPE_BONE:
			return DeleteBone(SubPath);
			break;
		case TYPE_LAYER:
			return DeleteLayer(SubPath);
			break;
	}
}


