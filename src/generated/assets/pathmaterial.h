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

#ifndef __CLIENT_ASSETS_PATHMATERIAL__
#define __CLIENT_ASSETS_PATHMATERIAL__

#include <shared/assets/asset.h>
#include <cassert>
#include <vector>
#include <shared/math/vector.h>
#include <shared/assets/assetpath.h>
#include <shared/tl/algorithm.h>

class CAsset_PathMaterial : public CAsset
{
public:
	enum
	{
		SPRITEFLAG_VFLIP = 1,
		SPRITEFLAG_HFLIP = 2,
		SPRITEFLAG_ROTATION = 4,
	
		SPRITEFILLING_SCALING = 0,
		SPRITEFILLING_STRETCHING,
		SPRITEFILLING_SPACING,
	
		SPRITEALIGN_LINE = 0,
		SPRITEALIGN_OBJECT,
		SPRITEALIGN_STRETCHED,
	
		SPRITETILE_LINE = 0,
		SPRITETILE_CAP_START,
		SPRITETILE_CAP_END,
		SPRITETILE_CORNER_CONVEX,
		SPRITETILE_CORNER_CONCAVE,
	};
	
	static const int TypeId = 28;
	
	enum
	{
		TYPE_LABEL,
		TYPE_LAYER_SPRITE,
		TYPE_LAYER,
	};
	
	static inline CSubPath SubPath_Label(int Id0) { return CSubPath(TYPE_LABEL, Id0, 0, 0); }
	static inline CSubPath SubPath_LayerSprite(int Id0, int Id1) { return CSubPath(TYPE_LAYER_SPRITE, Id0, Id1, 0); }
	static inline CSubPath SubPath_Layer(int Id0) { return CSubPath(TYPE_LAYER, Id0, 0, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		LABEL_ARRAYSIZE,
		LABEL_PTR,
		LABEL_ARRAY,
		LABEL_COLOR,
		LABEL_ANGLESTART,
		LABEL_ANGLEEND,
		LABEL,
		LAYER_ARRAYSIZE,
		LAYER_PTR,
		LAYER_ARRAY,
		LAYER_SPRITE_ARRAYSIZE,
		LAYER_SPRITE_PTR,
		LAYER_SPRITE_ARRAY,
		LAYER_SPRITE,
		LAYER_SPRITE_PATH,
		LAYER_SPRITE_SIZE,
		LAYER_SPRITE_SIZE_X,
		LAYER_SPRITE_SIZE_Y,
		LAYER_SPRITE_COLOR,
		LAYER_SPRITE_FLAGS,
		LAYER_SPRITE_POSITION,
		LAYER_SPRITE_POSITION_X,
		LAYER_SPRITE_POSITION_Y,
		LAYER_SPRITE_ALIGNMENT,
		LAYER_SPRITE_FILLING,
		LAYER_SPRITE_TILETYPE,
		LAYER_SPRITE_TILELABEL0,
		LAYER_SPRITE_TILELABEL1,
		LAYER,
		TEXTUREPATH,
		TEXTURECOLOR,
		TEXTURESIZE_X,
		TEXTURESIZE_Y,
		TEXTURESIZE,
		TEXTUREANGLE,
		TEXTURESPACING,
		TEXTUREENABLED,
	};
	
	class CIteratorLabel
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorLabel() : m_Index(0), m_Reverse(false) {}
		CIteratorLabel(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorLabel& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Label(m_Index); }
		bool operator==(const CIteratorLabel& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorLabel& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorLabel BeginLabel() const { return CIteratorLabel(0, false); }
	CIteratorLabel EndLabel() const { return CIteratorLabel(m_Label.size(), false); }
	CIteratorLabel ReverseBeginLabel() const { return CIteratorLabel(m_Label.size()-1, true); }
	CIteratorLabel ReverseEndLabel() const { return CIteratorLabel(-1, true); }
	
	class CIteratorLayer
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorLayer() : m_Index(0), m_Reverse(false) {}
		CIteratorLayer(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorLayer& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Layer(m_Index); }
		bool operator==(const CIteratorLayer& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorLayer& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorLayer BeginLayer() const { return CIteratorLayer(0, false); }
	CIteratorLayer EndLayer() const { return CIteratorLayer(m_Layer.size(), false); }
	CIteratorLayer ReverseBeginLayer() const { return CIteratorLayer(m_Layer.size()-1, true); }
	CIteratorLayer ReverseEndLayer() const { return CIteratorLayer(-1, true); }
	
	class CLabel
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			tua_uint32 m_Color;
			tua_float m_AngleStart;
			tua_float m_AngleEnd;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			tua_uint32 m_Color;
			tua_float m_AngleStart;
			tua_float m_AngleEnd;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			tua_uint32 m_Color;
			tua_float m_AngleStart;
			tua_float m_AngleEnd;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			tua_uint32 m_Color;
			tua_float m_AngleStart;
			tua_float m_AngleEnd;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			tua_uint32 m_Color;
			tua_float m_AngleStart;
			tua_float m_AngleEnd;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_PathMaterial::CLabel& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLabel& SysType, CTuaType_0_2_4& TuaType);
		};
		
	
	private:
		vec4 m_Color;
		float m_AngleStart;
		float m_AngleEnd;
	
	public:
		CLabel();
		inline vec4 GetColor() const { return m_Color; }
		
		inline float GetAngleStart() const { return m_AngleStart; }
		
		inline float GetAngleEnd() const { return m_AngleEnd; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		inline void SetAngleStart(float Value) { m_AngleStart = Value; }
		
		inline void SetAngleEnd(float Value) { m_AngleEnd = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CSprite
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			CAssetPath::CTuaType m_Path;
			CTuaVec2 m_Size;
			tua_uint32 m_Color;
			tua_int32 m_Flags;
			CTuaVec2 m_Position;
			tua_int32 m_Alignment;
			tua_int32 m_Filling;
			tua_int32 m_TileType;
			tua_int32 m_TileLabel0;
			tua_int32 m_TileLabel1;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			CAssetPath::CTuaType m_Path;
			CTuaVec2 m_Size;
			tua_uint32 m_Color;
			tua_int32 m_Flags;
			CTuaVec2 m_Position;
			tua_int32 m_Alignment;
			tua_int32 m_Filling;
			tua_int32 m_TileType;
			tua_int32 m_TileLabel0;
			tua_int32 m_TileLabel1;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			CAssetPath::CTuaType m_Path;
			CTuaVec2 m_Size;
			tua_uint32 m_Color;
			tua_int32 m_Flags;
			CTuaVec2 m_Position;
			tua_int32 m_Alignment;
			tua_int32 m_Filling;
			tua_int32 m_TileType;
			tua_int32 m_TileLabel0;
			tua_int32 m_TileLabel1;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			CAssetPath::CTuaType m_Path;
			CTuaVec2 m_Size;
			tua_uint32 m_Color;
			tua_int32 m_Flags;
			CTuaVec2 m_Position;
			tua_int32 m_Alignment;
			tua_int32 m_Filling;
			tua_int32 m_TileType;
			tua_int32 m_TileLabel0;
			tua_int32 m_TileLabel1;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			CAssetPath::CTuaType m_Path;
			CTuaVec2 m_Size;
			tua_uint32 m_Color;
			tua_int32 m_Flags;
			CTuaVec2 m_Position;
			tua_int32 m_Alignment;
			tua_int32 m_Filling;
			tua_int32 m_TileType;
			tua_int32 m_TileLabel0;
			tua_int32 m_TileLabel1;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_PathMaterial::CSprite& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CSprite& SysType, CTuaType_0_2_4& TuaType);
		};
		
	
	private:
		CAssetPath m_Path;
		vec2 m_Size;
		vec4 m_Color;
		int m_Flags;
		vec2 m_Position;
		int m_Alignment;
		int m_Filling;
		int m_TileType;
		int m_TileLabel0;
		int m_TileLabel1;
	
	public:
		CSprite();
		inline CAssetPath GetPath() const { return m_Path; }
		
		inline vec2 GetSize() const { return m_Size; }
		
		inline float GetSizeX() const { return m_Size.x; }
		
		inline float GetSizeY() const { return m_Size.y; }
		
		inline vec4 GetColor() const { return m_Color; }
		
		inline int GetFlags() const { return m_Flags; }
		
		inline vec2 GetPosition() const { return m_Position; }
		
		inline float GetPositionX() const { return m_Position.x; }
		
		inline float GetPositionY() const { return m_Position.y; }
		
		inline int GetAlignment() const { return m_Alignment; }
		
		inline int GetFilling() const { return m_Filling; }
		
		inline int GetTileType() const { return m_TileType; }
		
		inline int GetTileLabel0() const { return m_TileLabel0; }
		
		inline int GetTileLabel1() const { return m_TileLabel1; }
		
		inline void SetPath(const CAssetPath& Value) { m_Path = Value; }
		
		inline void SetSize(vec2 Value) { m_Size = Value; }
		
		inline void SetSizeX(float Value) { m_Size.x = Value; }
		
		inline void SetSizeY(float Value) { m_Size.y = Value; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		inline void SetFlags(int Value) { m_Flags = Value; }
		
		inline void SetPosition(vec2 Value) { m_Position = Value; }
		
		inline void SetPositionX(float Value) { m_Position.x = Value; }
		
		inline void SetPositionY(float Value) { m_Position.y = Value; }
		
		inline void SetAlignment(int Value) { m_Alignment = Value; }
		
		inline void SetFilling(int Value) { m_Filling = Value; }
		
		inline void SetTileType(int Value) { m_TileType = Value; }
		
		inline void SetTileLabel0(int Value) { m_TileLabel0 = Value; }
		
		inline void SetTileLabel1(int Value) { m_TileLabel1 = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
			Operation.Apply(m_Path);
		}
		
	};
	class CLayer
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			CTuaArray m_Sprite;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			CTuaArray m_Sprite;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			CTuaArray m_Sprite;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			CTuaArray m_Sprite;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			CTuaArray m_Sprite;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_PathMaterial::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial::CLayer& SysType, CTuaType_0_2_4& TuaType);
		};
		
	
	private:
		std::vector<CSprite> m_Sprite;
	
	public:
		inline int GetSpriteArraySize() const { return m_Sprite.size(); }
		
		inline const CAsset_PathMaterial::CSprite* GetSpritePtr() const { return &(m_Sprite.front()); }
		
		inline const std::vector<CSprite>& GetSpriteArray() const { return m_Sprite; }
		inline std::vector<CSprite>& GetSpriteArray() { return m_Sprite; }
		
		inline const CAsset_PathMaterial::CSprite& GetSprite(const CSubPath& SubPath) const
		{
			assert(SubPath.GetId() < m_Sprite.size());
			{
				return m_Sprite[SubPath.GetId()];
			}
		}
		
		inline CAssetPath GetSpritePath(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetPath();
			else return CAssetPath::Null();
		}
		
		inline vec2 GetSpriteSize(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetSize();
			else return 0.0f;
		}
		
		inline float GetSpriteSizeX(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetSizeX();
			else return 0.0f;
		}
		
		inline float GetSpriteSizeY(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetSizeY();
			else return 0.0f;
		}
		
		inline vec4 GetSpriteColor(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetColor();
			else return 1.0f;
		}
		
		inline int GetSpriteFlags(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetFlags();
			else return 0;
		}
		
		inline vec2 GetSpritePosition(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetPosition();
			else return 0.0f;
		}
		
		inline float GetSpritePositionX(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetPositionX();
			else return 0.0f;
		}
		
		inline float GetSpritePositionY(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetPositionY();
			else return 0.0f;
		}
		
		inline int GetSpriteAlignment(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetAlignment();
			else return 0;
		}
		
		inline int GetSpriteFilling(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetFilling();
			else return 0;
		}
		
		inline int GetSpriteTileType(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetTileType();
			else return 0;
		}
		
		inline int GetSpriteTileLabel0(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetTileLabel0();
			else return 0;
		}
		
		inline int GetSpriteTileLabel1(const CSubPath& SubPath) const
		{
			if(SubPath.GetId() < m_Sprite.size())
				return m_Sprite[SubPath.GetId()].GetTileLabel1();
			else return 0;
		}
		
		inline void SetSpriteArraySize(int Value) { m_Sprite.resize(Value); }
		
		inline void SetSprite(const CSubPath& SubPath, const CAsset_PathMaterial::CSprite& Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
			{
				m_Sprite[SubPath.GetId()] = Value;
			}
		}
		
		inline void SetSpritePath(const CSubPath& SubPath, const CAssetPath& Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetPath(Value);
		}
		
		inline void SetSpriteSize(const CSubPath& SubPath, vec2 Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetSize(Value);
		}
		
		inline void SetSpriteSizeX(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetSizeX(Value);
		}
		
		inline void SetSpriteSizeY(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetSizeY(Value);
		}
		
		inline void SetSpriteColor(const CSubPath& SubPath, vec4 Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetColor(Value);
		}
		
		inline void SetSpriteFlags(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetFlags(Value);
		}
		
		inline void SetSpritePosition(const CSubPath& SubPath, vec2 Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetPosition(Value);
		}
		
		inline void SetSpritePositionX(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetPositionX(Value);
		}
		
		inline void SetSpritePositionY(const CSubPath& SubPath, float Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetPositionY(Value);
		}
		
		inline void SetSpriteAlignment(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetAlignment(Value);
		}
		
		inline void SetSpriteFilling(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetFilling(Value);
		}
		
		inline void SetSpriteTileType(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetTileType(Value);
		}
		
		inline void SetSpriteTileLabel0(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetTileLabel0(Value);
		}
		
		inline void SetSpriteTileLabel1(const CSubPath& SubPath, int Value)
		{
			if(SubPath.GetId() < m_Sprite.size())
				m_Sprite[SubPath.GetId()].SetTileLabel1(Value);
		}
		
		inline int AddSprite()
		{
			int Id = m_Sprite.size();
			m_Sprite.emplace_back();
			return Id;
		}
		
		inline void AddAtSprite(int Index) { m_Sprite.insert(m_Sprite.begin() + Index, CAsset_PathMaterial::CSprite()); }
		
		inline void DeleteSprite(const CSubPath& SubPath) { m_Sprite.erase(m_Sprite.begin() + SubPath.GetId()); }
		
		inline void RelMoveSprite(const CSubPath& SubPath, int RelMove) { relative_move(m_Sprite, SubPath.GetId(), RelMove); }
		
		inline bool IsValidSprite(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Sprite.size()); }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
			for(unsigned int i=0; i<m_Sprite.size(); i++)
			{
				m_Sprite[i].AssetPathOperation(Operation);
			}
		}
		
	};
	class CTuaType_0_1_0 : public CAsset::CTuaType_0_1_0
	{
	public:
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_1_0& TuaType);
	};
	
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		CTuaArray m_Label;
		CTuaArray m_Layer;
		CAssetPath::CTuaType m_TexturePath;
		tua_uint32 m_TextureColor;
		CTuaVec2 m_TextureSize;
		tua_float m_TextureAngle;
		tua_float m_TextureSpacing;
		tua_uint8 m_TextureEnabled;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		CTuaArray m_Label;
		CTuaArray m_Layer;
		CAssetPath::CTuaType m_TexturePath;
		tua_uint32 m_TextureColor;
		CTuaVec2 m_TextureSize;
		tua_float m_TextureAngle;
		tua_float m_TextureSpacing;
		tua_uint8 m_TextureEnabled;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		CTuaArray m_Label;
		CTuaArray m_Layer;
		CAssetPath::CTuaType m_TexturePath;
		tua_uint32 m_TextureColor;
		CTuaVec2 m_TextureSize;
		tua_float m_TextureAngle;
		tua_float m_TextureSpacing;
		tua_uint8 m_TextureEnabled;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_2_2& TuaType);
	};
	
	class CTuaType_0_2_3 : public CAsset::CTuaType_0_2_3
	{
	public:
		CTuaArray m_Label;
		CTuaArray m_Layer;
		CAssetPath::CTuaType m_TexturePath;
		tua_uint32 m_TextureColor;
		CTuaVec2 m_TextureSize;
		tua_float m_TextureAngle;
		tua_float m_TextureSpacing;
		tua_uint8 m_TextureEnabled;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_2_3& TuaType);
	};
	
	class CTuaType_0_2_4 : public CAsset::CTuaType_0_2_4
	{
	public:
		CTuaArray m_Label;
		CTuaArray m_Layer;
		CAssetPath::CTuaType m_TexturePath;
		tua_uint32 m_TextureColor;
		CTuaVec2 m_TextureSize;
		tua_float m_TextureAngle;
		tua_float m_TextureSpacing;
		tua_uint8 m_TextureEnabled;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_PathMaterial& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_PathMaterial& SysType, CTuaType_0_2_4& TuaType);
	};
	

private:
	std::vector<CAsset_PathMaterial::CLabel> m_Label;
	std::vector<CAsset_PathMaterial::CLayer> m_Layer;
	CAssetPath m_TexturePath;
	vec4 m_TextureColor;
	vec2 m_TextureSize;
	float m_TextureAngle;
	float m_TextureSpacing;
	bool m_TextureEnabled;

public:
	virtual ~CAsset_PathMaterial() {}
	
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int AddSubItemAt(int Type, const CSubPath& SubPath, int Index);
	
	void DeleteSubItem(const CSubPath& SubPath);
	
	void RelMoveSubItem(const CSubPath& SubPath, int RelMove);
	
	CAsset_PathMaterial();
	inline int GetLabelArraySize() const { return m_Label.size(); }
	
	inline const CAsset_PathMaterial::CLabel* GetLabelPtr() const { return &(m_Label.front()); }
	
	inline const std::vector<CAsset_PathMaterial::CLabel>& GetLabelArray() const { return m_Label; }
	inline std::vector<CAsset_PathMaterial::CLabel>& GetLabelArray() { return m_Label; }
	
	inline const CAsset_PathMaterial::CLabel& GetLabel(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Label.size());
		{
			return m_Label[SubPath.GetId()];
		}
	}
	
	inline vec4 GetLabelColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Label.size())
			return m_Label[SubPath.GetId()].GetColor();
		else return 1.0f;
	}
	
	inline float GetLabelAngleStart(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Label.size())
			return m_Label[SubPath.GetId()].GetAngleStart();
		else return 0.0f;
	}
	
	inline float GetLabelAngleEnd(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Label.size())
			return m_Label[SubPath.GetId()].GetAngleEnd();
		else return 0.0f;
	}
	
	inline int GetLayerArraySize() const { return m_Layer.size(); }
	
	inline const CAsset_PathMaterial::CLayer* GetLayerPtr() const { return &(m_Layer.front()); }
	
	inline const std::vector<CAsset_PathMaterial::CLayer>& GetLayerArray() const { return m_Layer; }
	inline std::vector<CAsset_PathMaterial::CLayer>& GetLayerArray() { return m_Layer; }
	
	inline const CAsset_PathMaterial::CLayer& GetLayer(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Layer.size());
		{
			return m_Layer[SubPath.GetId()];
		}
	}
	
	inline int GetLayerSpriteArraySize(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteArraySize();
		else return 0;
	}
	
	inline const CAsset_PathMaterial::CSprite* GetLayerSpritePtr(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpritePtr();
		else return NULL;
	}
	
	inline const std::vector<CSprite>& GetLayerSpriteArray(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Layer.size());
		return m_Layer[SubPath.GetId()].GetSpriteArray();
	}
	inline std::vector<CSprite>& GetLayerSpriteArray(const CSubPath& SubPath)
	{
		assert(SubPath.GetId() < m_Layer.size());
		return m_Layer[SubPath.GetId()].GetSpriteArray();
	}
	
	inline const CAsset_PathMaterial::CSprite& GetLayerSprite(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Layer.size());
		return m_Layer[SubPath.GetId()].GetSprite(SubPath.PopId());
	}
	
	inline CAssetPath GetLayerSpritePath(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpritePath(SubPath.PopId());
		else return CAssetPath::Null();
	}
	
	inline vec2 GetLayerSpriteSize(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteSize(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetLayerSpriteSizeX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteSizeX(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetLayerSpriteSizeY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteSizeY(SubPath.PopId());
		else return 0.0f;
	}
	
	inline vec4 GetLayerSpriteColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteColor(SubPath.PopId());
		else return 1.0f;
	}
	
	inline int GetLayerSpriteFlags(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteFlags(SubPath.PopId());
		else return 0;
	}
	
	inline vec2 GetLayerSpritePosition(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpritePosition(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetLayerSpritePositionX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpritePositionX(SubPath.PopId());
		else return 0.0f;
	}
	
	inline float GetLayerSpritePositionY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpritePositionY(SubPath.PopId());
		else return 0.0f;
	}
	
	inline int GetLayerSpriteAlignment(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteAlignment(SubPath.PopId());
		else return 0;
	}
	
	inline int GetLayerSpriteFilling(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteFilling(SubPath.PopId());
		else return 0;
	}
	
	inline int GetLayerSpriteTileType(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteTileType(SubPath.PopId());
		else return 0;
	}
	
	inline int GetLayerSpriteTileLabel0(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteTileLabel0(SubPath.PopId());
		else return 0;
	}
	
	inline int GetLayerSpriteTileLabel1(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetSpriteTileLabel1(SubPath.PopId());
		else return 0;
	}
	
	inline CAssetPath GetTexturePath() const { return m_TexturePath; }
	
	inline vec4 GetTextureColor() const { return m_TextureColor; }
	
	inline vec2 GetTextureSize() const { return m_TextureSize; }
	
	inline float GetTextureSizeX() const { return m_TextureSize.x; }
	
	inline float GetTextureSizeY() const { return m_TextureSize.y; }
	
	inline float GetTextureAngle() const { return m_TextureAngle; }
	
	inline float GetTextureSpacing() const { return m_TextureSpacing; }
	
	inline bool GetTextureEnabled() const { return m_TextureEnabled; }
	
	inline void SetLabelArraySize(int Value) { m_Label.resize(Value); }
	
	inline void SetLabel(const CSubPath& SubPath, const CAsset_PathMaterial::CLabel& Value)
	{
		if(SubPath.GetId() < m_Label.size())
		{
			m_Label[SubPath.GetId()] = Value;
		}
	}
	
	inline void SetLabelColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Label.size())
			m_Label[SubPath.GetId()].SetColor(Value);
	}
	
	inline void SetLabelAngleStart(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Label.size())
			m_Label[SubPath.GetId()].SetAngleStart(Value);
	}
	
	inline void SetLabelAngleEnd(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Label.size())
			m_Label[SubPath.GetId()].SetAngleEnd(Value);
	}
	
	inline void SetLayerArraySize(int Value) { m_Layer.resize(Value); }
	
	inline void SetLayer(const CSubPath& SubPath, const CAsset_PathMaterial::CLayer& Value)
	{
		if(SubPath.GetId() < m_Layer.size())
		{
			m_Layer[SubPath.GetId()] = Value;
		}
	}
	
	inline void SetLayerSpriteArraySize(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteArraySize(Value);
	}
	
	inline void SetLayerSprite(const CSubPath& SubPath, const CAsset_PathMaterial::CSprite& Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSprite(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpritePath(const CSubPath& SubPath, const CAssetPath& Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpritePath(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteSize(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteSize(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteSizeX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteSizeX(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteSizeY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteSizeY(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteColor(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteFlags(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteFlags(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpritePosition(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpritePosition(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpritePositionX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpritePositionX(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpritePositionY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpritePositionY(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteAlignment(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteAlignment(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteFilling(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteFilling(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteTileType(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteTileType(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteTileLabel0(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteTileLabel0(SubPath.PopId(), Value);
	}
	
	inline void SetLayerSpriteTileLabel1(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetSpriteTileLabel1(SubPath.PopId(), Value);
	}
	
	inline void SetTexturePath(const CAssetPath& Value) { m_TexturePath = Value; }
	
	inline void SetTextureColor(vec4 Value) { m_TextureColor = Value; }
	
	inline void SetTextureSize(vec2 Value) { m_TextureSize = Value; }
	
	inline void SetTextureSizeX(float Value) { m_TextureSize.x = Value; }
	
	inline void SetTextureSizeY(float Value) { m_TextureSize.y = Value; }
	
	inline void SetTextureAngle(float Value) { m_TextureAngle = Value; }
	
	inline void SetTextureSpacing(float Value) { m_TextureSpacing = Value; }
	
	inline void SetTextureEnabled(bool Value) { m_TextureEnabled = Value; }
	
	inline int AddLabel()
	{
		int Id = m_Label.size();
		m_Label.emplace_back();
		return Id;
	}
	
	inline int AddLayer()
	{
		int Id = m_Layer.size();
		m_Layer.emplace_back();
		return Id;
	}
	
	inline int AddLayerSprite(const CSubPath& SubPath) { return m_Layer[SubPath.GetId()].AddSprite(); }
	
	inline void AddAtLabel(int Index) { m_Label.insert(m_Label.begin() + Index, CAsset_PathMaterial::CLabel()); }
	
	inline void AddAtLayer(int Index) { m_Layer.insert(m_Layer.begin() + Index, CAsset_PathMaterial::CLayer()); }
	
	inline void AddAtLayerSprite(const CSubPath& SubPath, int Index) { m_Layer[SubPath.GetId()].AddAtSprite(Index); }
	
	inline void DeleteLabel(const CSubPath& SubPath) { m_Label.erase(m_Label.begin() + SubPath.GetId()); }
	
	inline void DeleteLayer(const CSubPath& SubPath) { m_Layer.erase(m_Layer.begin() + SubPath.GetId()); }
	
	inline void DeleteLayerSprite(const CSubPath& SubPath) { m_Layer[SubPath.GetId()].DeleteSprite(SubPath.PopId()); }
	
	inline void RelMoveLabel(const CSubPath& SubPath, int RelMove) { relative_move(m_Label, SubPath.GetId(), RelMove); }
	
	inline void RelMoveLayer(const CSubPath& SubPath, int RelMove) { relative_move(m_Layer, SubPath.GetId(), RelMove); }
	
	inline void RelMoveLayerSprite(const CSubPath& SubPath, int RelMove) { m_Layer[SubPath.GetId()].RelMoveSprite(SubPath.PopId(), RelMove); }
	
	inline bool IsValidLabel(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Label.size()); }
	
	inline bool IsValidLayer(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Layer.size()); }
	
	inline bool IsValidLayerSprite(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Layer.size() && m_Layer[SubPath.GetId()].IsValidSprite(SubPath.PopId())); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		for(unsigned int i=0; i<m_Label.size(); i++)
		{
			m_Label[i].AssetPathOperation(Operation);
		}
		for(unsigned int i=0; i<m_Layer.size(); i++)
		{
			m_Layer[i].AssetPathOperation(Operation);
		}
		Operation.Apply(m_TexturePath);
	}
	
};

template<> int CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> bool CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> float CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> vec2 CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value);
template<> vec4 CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CAssetPath CAsset_PathMaterial::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_PathMaterial::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
