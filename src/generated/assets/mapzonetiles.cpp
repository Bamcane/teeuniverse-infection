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

#include <generated/assets/mapzonetiles.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_MapZoneTiles::CTile::CTile()
{
	m_Index = 0;
}

CAsset_MapZoneTiles::CAsset_MapZoneTiles()
{
	m_Visibility = true;
}

void CAsset_MapZoneTiles::CTile::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapZoneTiles::CTile& SysType)
{
	SysType.m_Index = pLoadingContext->ArchiveFile()->ReadUInt8(TuaType.m_Index);
}

void CAsset_MapZoneTiles::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapZoneTiles& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_ParentPath, SysType.m_ParentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ZoneTypePath, SysType.m_ZoneTypePath);
	{
		const CAsset_MapZoneTiles::CTile::CTuaType* pData = (const CAsset_MapZoneTiles::CTile::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Tile.m_Data);
		uint32 Width = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Tile.m_Width);
		uint32 Height = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Tile.m_Height);
		uint32 Depth = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Tile.m_Depth);
		int Size = Width * Height * Depth;
		SysType.m_Tile.resize(Width, Height, Depth);
		for(int i=0; i<Size; i++)
		{
			CTile ReadedValue;
			CAsset_MapZoneTiles::CTile::CTuaType::Read(pLoadingContext, pData[i], ReadedValue);
			SysType.m_Tile.linear_set_clamp(i, ReadedValue);
		}
	}
	
	SysType.m_Visibility = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_Visibility);
}

void CAsset_MapZoneTiles::CTile::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType& TuaType)
{
	TuaType.m_Index = pLoadingContext->ArchiveFile()->WriteUInt8(SysType.m_Index);
}

void CAsset_MapZoneTiles::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_ParentPath, TuaType.m_ParentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ZoneTypePath, TuaType.m_ZoneTypePath);
	{
		TuaType.m_Tile.m_Width = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Tile.get_width());
		TuaType.m_Tile.m_Height = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Tile.get_height());
		TuaType.m_Tile.m_Depth = pLoadingContext->ArchiveFile()->WriteUInt32(SysType.m_Tile.get_depth());
		CAsset_MapZoneTiles::CTile::CTuaType* pData = new CAsset_MapZoneTiles::CTile::CTuaType[SysType.m_Tile.get_linear_size()];
		for(int i=0; i<SysType.m_Tile.get_linear_size(); i++)
		{
			CAsset_MapZoneTiles::CTile::CTuaType::Write(pLoadingContext, SysType.m_Tile.linear_get_clamp(i), pData[i]);
		}
		TuaType.m_Tile.m_Data = pLoadingContext->ArchiveFile()->AddData((tua_uint8*) pData, sizeof(CAsset_MapZoneTiles::CTile::CTuaType)*SysType.m_Tile.get_linear_size());
		delete[] pData;
	}
	TuaType.m_Visibility = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_Visibility);
}

template<>
int CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case TILE_WIDTH:
			return GetTileWidth();
		case TILE_HEIGHT:
			return GetTileHeight();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case TILE_WIDTH:
			SetTileWidth(Value);
			return true;
		case TILE_HEIGHT:
			SetTileHeight(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
uint32 CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, uint32 DefaultValue) const
{
	switch(ValueType)
	{
		case TILE_INDEX:
			return GetTileIndex(SubPath);
	}
	return CAsset::GetValue<uint32>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, uint32 Value)
{
	switch(ValueType)
	{
		case TILE_INDEX:
			SetTileIndex(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<uint32>(ValueType, SubPath, Value);
}

template<>
bool CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case VISIBILITY:
			return GetVisibility();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case VISIBILITY:
			SetVisibility(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case PARENTPATH:
			return GetParentPath();
		case ZONETYPEPATH:
			return GetZoneTypePath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case PARENTPATH:
			SetParentPath(Value);
			return true;
		case ZONETYPEPATH:
			SetZoneTypePath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_MapZoneTiles::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

int CAsset_MapZoneTiles::DeleteSubItem(const CSubPath& SubPath)
{
}


