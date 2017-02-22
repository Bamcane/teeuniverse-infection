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

#ifndef __CLIENT_ASSETS_MAPLAYERQUADS__
#define __CLIENT_ASSETS_MAPLAYERQUADS__

#include <shared/assets/asset.h>
#include <cassert>
#include <vector>
#include <shared/assets/assetpath.h>
#include <shared/tl/algorithm.h>

class CAsset_MapLayerQuads : public CAsset
{
public:
	enum
	{
		VERTEX_NONE=0,
		VERTEX_PIVOT,
		VERTEX0,
		VERTEX1,
		VERTEX2,
		VERTEX3,
	};
	
	static const int TypeId = 16;
	
	enum
	{
		TYPE_QUAD,
	};
	
	static inline CSubPath SubPath_Quad(int Id0) { return CSubPath(TYPE_QUAD, Id0, 0, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		PARENTPATH,
		IMAGEPATH,
		QUAD_ARRAYSIZE,
		QUAD_PTR,
		QUAD_ARRAY,
		QUAD_PIVOT,
		QUAD_PIVOT_X,
		QUAD_PIVOT_Y,
		QUAD_SIZE,
		QUAD_SIZE_X,
		QUAD_SIZE_Y,
		QUAD_ANGLE,
		QUAD_VERTEX0,
		QUAD_VERTEX0_X,
		QUAD_VERTEX0_Y,
		QUAD_VERTEX1,
		QUAD_VERTEX1_X,
		QUAD_VERTEX1_Y,
		QUAD_VERTEX2,
		QUAD_VERTEX2_X,
		QUAD_VERTEX2_Y,
		QUAD_VERTEX3,
		QUAD_VERTEX3_X,
		QUAD_VERTEX3_Y,
		QUAD_UV0,
		QUAD_UV0_X,
		QUAD_UV0_Y,
		QUAD_UV1,
		QUAD_UV1_X,
		QUAD_UV1_Y,
		QUAD_UV2,
		QUAD_UV2_X,
		QUAD_UV2_Y,
		QUAD_UV3,
		QUAD_UV3_X,
		QUAD_UV3_Y,
		QUAD_COLOR0,
		QUAD_COLOR1,
		QUAD_COLOR2,
		QUAD_COLOR3,
		QUAD_ANIMATIONPATH,
		QUAD_COLOR,
		QUAD,
		VISIBILITY,
		LEVELOFDETAIL,
	};
	
	class CIteratorQuad
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorQuad() : m_Index(0), m_Reverse(false) {}
		CIteratorQuad(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorQuad& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Quad(m_Index); }
		bool operator==(const CIteratorQuad& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorQuad& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorQuad BeginQuad() const { return CIteratorQuad(0, false); }
	CIteratorQuad EndQuad() const { return CIteratorQuad(m_Quad.size(), false); }
	CIteratorQuad ReverseBeginQuad() const { return CIteratorQuad(m_Quad.size()-1, true); }
	CIteratorQuad ReverseEndQuad() const { return CIteratorQuad(-1, true); }
	
	class CQuad
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			CTuaVec2 m_Pivot;
			CTuaVec2 m_Size;
			tua_float m_Angle;
			CTuaVec2 m_Vertex0;
			CTuaVec2 m_Vertex1;
			CTuaVec2 m_Vertex2;
			CTuaVec2 m_Vertex3;
			CTuaVec2 m_UV0;
			CTuaVec2 m_UV1;
			CTuaVec2 m_UV2;
			CTuaVec2 m_UV3;
			tua_uint32 m_Color0;
			tua_uint32 m_Color1;
			tua_uint32 m_Color2;
			tua_uint32 m_Color3;
			CAssetPath::CTuaType m_AnimationPath;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_MapLayerQuads::CQuad& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads::CQuad& SysType, CTuaType_0_2_4& TuaType);
		};
		
	
	private:
		vec2 m_Pivot;
		vec2 m_Size;
		float m_Angle;
		vec2 m_Vertex0;
		vec2 m_Vertex1;
		vec2 m_Vertex2;
		vec2 m_Vertex3;
		vec2 m_UV0;
		vec2 m_UV1;
		vec2 m_UV2;
		vec2 m_UV3;
		vec4 m_Color0;
		vec4 m_Color1;
		vec4 m_Color2;
		vec4 m_Color3;
		CAssetPath m_AnimationPath;
		vec4 m_Color;
	
	public:
		void GetTransform(CAssetsManager* pAssetsManager, float Time, matrix2x2* pMatrix, vec2* pPosition) const;
		void GetDrawState(CAssetsManager* pAssetsManager, float Time, vec4* pColor, int* pState) const;
		CQuad();
		inline vec2 GetPivot() const { return m_Pivot; }
		
		inline float GetPivotX() const { return m_Pivot.x; }
		
		inline float GetPivotY() const { return m_Pivot.y; }
		
		inline vec2 GetSize() const { return m_Size; }
		
		inline float GetSizeX() const { return m_Size.x; }
		
		inline float GetSizeY() const { return m_Size.y; }
		
		inline float GetAngle() const { return m_Angle; }
		
		inline vec2 GetVertex0() const { return m_Vertex0; }
		
		inline float GetVertex0X() const { return m_Vertex0.x; }
		
		inline float GetVertex0Y() const { return m_Vertex0.y; }
		
		inline vec2 GetVertex1() const { return m_Vertex1; }
		
		inline float GetVertex1X() const { return m_Vertex1.x; }
		
		inline float GetVertex1Y() const { return m_Vertex1.y; }
		
		inline vec2 GetVertex2() const { return m_Vertex2; }
		
		inline float GetVertex2X() const { return m_Vertex2.x; }
		
		inline float GetVertex2Y() const { return m_Vertex2.y; }
		
		inline vec2 GetVertex3() const { return m_Vertex3; }
		
		inline float GetVertex3X() const { return m_Vertex3.x; }
		
		inline float GetVertex3Y() const { return m_Vertex3.y; }
		
		inline vec2 GetUV0() const { return m_UV0; }
		
		inline float GetUV0X() const { return m_UV0.x; }
		
		inline float GetUV0Y() const { return m_UV0.y; }
		
		inline vec2 GetUV1() const { return m_UV1; }
		
		inline float GetUV1X() const { return m_UV1.x; }
		
		inline float GetUV1Y() const { return m_UV1.y; }
		
		inline vec2 GetUV2() const { return m_UV2; }
		
		inline float GetUV2X() const { return m_UV2.x; }
		
		inline float GetUV2Y() const { return m_UV2.y; }
		
		inline vec2 GetUV3() const { return m_UV3; }
		
		inline float GetUV3X() const { return m_UV3.x; }
		
		inline float GetUV3Y() const { return m_UV3.y; }
		
		inline vec4 GetColor0() const { return m_Color0; }
		
		inline vec4 GetColor1() const { return m_Color1; }
		
		inline vec4 GetColor2() const { return m_Color2; }
		
		inline vec4 GetColor3() const { return m_Color3; }
		
		inline CAssetPath GetAnimationPath() const { return m_AnimationPath; }
		
		inline vec4 GetColor() const { return m_Color; }
		
		inline void SetPivot(vec2 Value) { m_Pivot = Value; }
		
		inline void SetPivotX(float Value) { m_Pivot.x = Value; }
		
		inline void SetPivotY(float Value) { m_Pivot.y = Value; }
		
		inline void SetSize(vec2 Value) { m_Size = Value; }
		
		inline void SetSizeX(float Value) { m_Size.x = Value; }
		
		inline void SetSizeY(float Value) { m_Size.y = Value; }
		
		inline void SetAngle(float Value) { m_Angle = Value; }
		
		inline void SetVertex0(vec2 Value) { m_Vertex0 = Value; }
		
		inline void SetVertex0X(float Value) { m_Vertex0.x = Value; }
		
		inline void SetVertex0Y(float Value) { m_Vertex0.y = Value; }
		
		inline void SetVertex1(vec2 Value) { m_Vertex1 = Value; }
		
		inline void SetVertex1X(float Value) { m_Vertex1.x = Value; }
		
		inline void SetVertex1Y(float Value) { m_Vertex1.y = Value; }
		
		inline void SetVertex2(vec2 Value) { m_Vertex2 = Value; }
		
		inline void SetVertex2X(float Value) { m_Vertex2.x = Value; }
		
		inline void SetVertex2Y(float Value) { m_Vertex2.y = Value; }
		
		inline void SetVertex3(vec2 Value) { m_Vertex3 = Value; }
		
		inline void SetVertex3X(float Value) { m_Vertex3.x = Value; }
		
		inline void SetVertex3Y(float Value) { m_Vertex3.y = Value; }
		
		inline void SetUV0(vec2 Value) { m_UV0 = Value; }
		
		inline void SetUV0X(float Value) { m_UV0.x = Value; }
		
		inline void SetUV0Y(float Value) { m_UV0.y = Value; }
		
		inline void SetUV1(vec2 Value) { m_UV1 = Value; }
		
		inline void SetUV1X(float Value) { m_UV1.x = Value; }
		
		inline void SetUV1Y(float Value) { m_UV1.y = Value; }
		
		inline void SetUV2(vec2 Value) { m_UV2 = Value; }
		
		inline void SetUV2X(float Value) { m_UV2.x = Value; }
		
		inline void SetUV2Y(float Value) { m_UV2.y = Value; }
		
		inline void SetUV3(vec2 Value) { m_UV3 = Value; }
		
		inline void SetUV3X(float Value) { m_UV3.x = Value; }
		
		inline void SetUV3Y(float Value) { m_UV3.y = Value; }
		
		inline void SetColor0(vec4 Value) { m_Color0 = Value; }
		
		inline void SetColor1(vec4 Value) { m_Color1 = Value; }
		
		inline void SetColor2(vec4 Value) { m_Color2 = Value; }
		
		inline void SetColor3(vec4 Value) { m_Color3 = Value; }
		
		inline void SetAnimationPath(const CAssetPath& Value) { m_AnimationPath = Value; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
			Operation.Apply(m_AnimationPath);
		}
		
	};
	class CTuaType_0_1_0 : public CAsset::CTuaType_0_1_0
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_1_0& TuaType);
	};
	
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_2_2& TuaType);
	};
	
	class CTuaType_0_2_3 : public CAsset::CTuaType_0_2_3
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		tua_int32 m_LevelOfDetail;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_2_3& TuaType);
	};
	
	class CTuaType_0_2_4 : public CAsset::CTuaType_0_2_4
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_Quad;
		tua_uint8 m_Visibility;
		tua_int32 m_LevelOfDetail;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_MapLayerQuads& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerQuads& SysType, CTuaType_0_2_4& TuaType);
	};
	

private:
	CAssetPath m_ParentPath;
	CAssetPath m_ImagePath;
	std::vector<CAsset_MapLayerQuads::CQuad> m_Quad;
	bool m_Visibility;
	int m_LevelOfDetail;

public:
	void GetQuadTransform(const CSubPath& SubPath, float Time, matrix2x2* pMatrix, vec2* pPosition) const;
	void GetQuadDrawState(const CSubPath& SubPath, float Time, vec4* pColor, int* pState) const;
	virtual ~CAsset_MapLayerQuads() {}
	
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
	
	CAsset_MapLayerQuads();
	inline CAssetPath GetParentPath() const { return m_ParentPath; }
	
	inline CAssetPath GetImagePath() const { return m_ImagePath; }
	
	inline int GetQuadArraySize() const { return m_Quad.size(); }
	
	inline const CAsset_MapLayerQuads::CQuad* GetQuadPtr() const { return &(m_Quad.front()); }
	
	inline const std::vector<CAsset_MapLayerQuads::CQuad>& GetQuadArray() const { return m_Quad; }
	inline std::vector<CAsset_MapLayerQuads::CQuad>& GetQuadArray() { return m_Quad; }
	
	inline const CAsset_MapLayerQuads::CQuad& GetQuad(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Quad.size());
		{
			return m_Quad[SubPath.GetId()];
		}
	}
	
	inline vec2 GetQuadPivot(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetPivot();
		else return 0.0f;
	}
	
	inline float GetQuadPivotX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetPivotX();
		else return 0.0f;
	}
	
	inline float GetQuadPivotY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetPivotY();
		else return 0.0f;
	}
	
	inline vec2 GetQuadSize(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetSize();
		else return 0.0f;
	}
	
	inline float GetQuadSizeX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetSizeX();
		else return 0.0f;
	}
	
	inline float GetQuadSizeY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetSizeY();
		else return 0.0f;
	}
	
	inline float GetQuadAngle(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetAngle();
		else return 0.0f;
	}
	
	inline vec2 GetQuadVertex0(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex0();
		else return 0.0f;
	}
	
	inline float GetQuadVertex0X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex0X();
		else return 0.0f;
	}
	
	inline float GetQuadVertex0Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex0Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadVertex1(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex1();
		else return 0.0f;
	}
	
	inline float GetQuadVertex1X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex1X();
		else return 0.0f;
	}
	
	inline float GetQuadVertex1Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex1Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadVertex2(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex2();
		else return 0.0f;
	}
	
	inline float GetQuadVertex2X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex2X();
		else return 0.0f;
	}
	
	inline float GetQuadVertex2Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex2Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadVertex3(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex3();
		else return 0.0f;
	}
	
	inline float GetQuadVertex3X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex3X();
		else return 0.0f;
	}
	
	inline float GetQuadVertex3Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetVertex3Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadUV0(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV0();
		else return 0.0f;
	}
	
	inline float GetQuadUV0X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV0X();
		else return 0.0f;
	}
	
	inline float GetQuadUV0Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV0Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadUV1(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV1();
		else return 0.0f;
	}
	
	inline float GetQuadUV1X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV1X();
		else return 0.0f;
	}
	
	inline float GetQuadUV1Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV1Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadUV2(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV2();
		else return 0.0f;
	}
	
	inline float GetQuadUV2X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV2X();
		else return 0.0f;
	}
	
	inline float GetQuadUV2Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV2Y();
		else return 0.0f;
	}
	
	inline vec2 GetQuadUV3(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV3();
		else return 0.0f;
	}
	
	inline float GetQuadUV3X(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV3X();
		else return 0.0f;
	}
	
	inline float GetQuadUV3Y(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetUV3Y();
		else return 0.0f;
	}
	
	inline vec4 GetQuadColor0(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetColor0();
		else return 1.0f;
	}
	
	inline vec4 GetQuadColor1(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetColor1();
		else return 1.0f;
	}
	
	inline vec4 GetQuadColor2(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetColor2();
		else return 1.0f;
	}
	
	inline vec4 GetQuadColor3(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetColor3();
		else return 1.0f;
	}
	
	inline CAssetPath GetQuadAnimationPath(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetAnimationPath();
		else return CAssetPath::Null();
	}
	
	inline vec4 GetQuadColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Quad.size())
			return m_Quad[SubPath.GetId()].GetColor();
		else return 1.0f;
	}
	
	inline bool GetVisibility() const { return m_Visibility; }
	
	inline int GetLevelOfDetail() const { return m_LevelOfDetail; }
	
	inline void SetParentPath(const CAssetPath& Value) { m_ParentPath = Value; }
	
	inline void SetImagePath(const CAssetPath& Value) { m_ImagePath = Value; }
	
	inline void SetQuadArraySize(int Value) { m_Quad.resize(Value); }
	
	inline void SetQuad(const CSubPath& SubPath, const CAsset_MapLayerQuads::CQuad& Value)
	{
		if(SubPath.GetId() < m_Quad.size())
		{
			m_Quad[SubPath.GetId()] = Value;
		}
	}
	
	inline void SetQuadPivot(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetPivot(Value);
	}
	
	inline void SetQuadPivotX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetPivotX(Value);
	}
	
	inline void SetQuadPivotY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetPivotY(Value);
	}
	
	inline void SetQuadSize(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetSize(Value);
	}
	
	inline void SetQuadSizeX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetSizeX(Value);
	}
	
	inline void SetQuadSizeY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetSizeY(Value);
	}
	
	inline void SetQuadAngle(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetAngle(Value);
	}
	
	inline void SetQuadVertex0(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex0(Value);
	}
	
	inline void SetQuadVertex0X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex0X(Value);
	}
	
	inline void SetQuadVertex0Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex0Y(Value);
	}
	
	inline void SetQuadVertex1(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex1(Value);
	}
	
	inline void SetQuadVertex1X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex1X(Value);
	}
	
	inline void SetQuadVertex1Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex1Y(Value);
	}
	
	inline void SetQuadVertex2(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex2(Value);
	}
	
	inline void SetQuadVertex2X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex2X(Value);
	}
	
	inline void SetQuadVertex2Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex2Y(Value);
	}
	
	inline void SetQuadVertex3(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex3(Value);
	}
	
	inline void SetQuadVertex3X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex3X(Value);
	}
	
	inline void SetQuadVertex3Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetVertex3Y(Value);
	}
	
	inline void SetQuadUV0(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV0(Value);
	}
	
	inline void SetQuadUV0X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV0X(Value);
	}
	
	inline void SetQuadUV0Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV0Y(Value);
	}
	
	inline void SetQuadUV1(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV1(Value);
	}
	
	inline void SetQuadUV1X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV1X(Value);
	}
	
	inline void SetQuadUV1Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV1Y(Value);
	}
	
	inline void SetQuadUV2(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV2(Value);
	}
	
	inline void SetQuadUV2X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV2X(Value);
	}
	
	inline void SetQuadUV2Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV2Y(Value);
	}
	
	inline void SetQuadUV3(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV3(Value);
	}
	
	inline void SetQuadUV3X(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV3X(Value);
	}
	
	inline void SetQuadUV3Y(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetUV3Y(Value);
	}
	
	inline void SetQuadColor0(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetColor0(Value);
	}
	
	inline void SetQuadColor1(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetColor1(Value);
	}
	
	inline void SetQuadColor2(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetColor2(Value);
	}
	
	inline void SetQuadColor3(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetColor3(Value);
	}
	
	inline void SetQuadAnimationPath(const CSubPath& SubPath, const CAssetPath& Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetAnimationPath(Value);
	}
	
	inline void SetQuadColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Quad.size())
			m_Quad[SubPath.GetId()].SetColor(Value);
	}
	
	inline void SetVisibility(bool Value) { m_Visibility = Value; }
	
	inline void SetLevelOfDetail(int Value) { m_LevelOfDetail = Value; }
	
	inline int AddQuad()
	{
		int Id = m_Quad.size();
		m_Quad.emplace_back();
		return Id;
	}
	
	inline void AddAtQuad(int Index) { m_Quad.insert(m_Quad.begin() + Index, CAsset_MapLayerQuads::CQuad()); }
	
	inline void DeleteQuad(const CSubPath& SubPath) { m_Quad.erase(m_Quad.begin() + SubPath.GetId()); }
	
	inline void RelMoveQuad(const CSubPath& SubPath, int RelMove) { relative_move(m_Quad, SubPath.GetId(), RelMove); }
	
	inline bool IsValidQuad(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Quad.size()); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_ParentPath);
		Operation.Apply(m_ImagePath);
		for(unsigned int i=0; i<m_Quad.size(); i++)
		{
			m_Quad[i].AssetPathOperation(Operation);
		}
	}
	
};

template<> int CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> bool CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> float CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> vec2 CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value);
template<> vec4 CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CAssetPath CAsset_MapLayerQuads::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_MapLayerQuads::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
