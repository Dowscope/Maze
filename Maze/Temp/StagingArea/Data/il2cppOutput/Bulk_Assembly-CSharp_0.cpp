#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// Board
struct Board_t2083606692;
// System.Collections.Stack
struct Stack_t1043988394;
// Tile
struct Tile_t2729441780;
// System.Collections.Generic.List`1<Tile>
struct List_1_t2098562912;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// BoardController
struct BoardController_t3713948888;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.Object
struct Object_t1021602117;
// Tile[]
struct TileU5BU5D_t1358904253;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t1358904254;
// System.Void
struct Void_t1841601450;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t3057952155;

extern RuntimeClass* Stack_t1043988394_il2cpp_TypeInfo_var;
extern RuntimeClass* TileU5B0___U2C0___U5D_t1358904254_il2cpp_TypeInfo_var;
extern RuntimeClass* Tile_t2729441780_il2cpp_TypeInfo_var;
extern const uint32_t Board__ctor_m3005063621_MetadataUsageId;
extern const uint32_t Board_createBoard_m675199575_MetadataUsageId;
extern RuntimeClass* List_1_t2098562912_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3934430897_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3103729741_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2155605833_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1230108560_RuntimeMethod_var;
extern const uint32_t Board_findNeighbour_m673651070_MetadataUsageId;
extern RuntimeClass* Board_t2083606692_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5B0___U2C0___U5D_t3057952155_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t4030073918_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m351711267_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3645121135;
extern Il2CppCodeGenString* _stringLiteral372029427;
extern const uint32_t BoardController_Start_m2403867529_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1625084853;
extern Il2CppCodeGenString* _stringLiteral217700537;
extern Il2CppCodeGenString* _stringLiteral1639333311;
extern Il2CppCodeGenString* _stringLiteral2758309879;
extern const uint32_t BoardController_Update_m224668774_MetadataUsageId;

struct TileU5B0___U2C0___U5D_t1358904254;
struct GameObjectU5B0___U2C0___U5D_t3057952155;
struct ObjectU5BU5D_t3614634134;


#ifndef U3CMODULEU3E_T3783534234_H
#define U3CMODULEU3E_T3783534234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534234 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534234_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2098562912_H
#define LIST_1_T2098562912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tile>
struct  List_1_t2098562912  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TileU5BU5D_t1358904253* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2098562912, ____items_1)); }
	inline TileU5BU5D_t1358904253* get__items_1() const { return ____items_1; }
	inline TileU5BU5D_t1358904253** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TileU5BU5D_t1358904253* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2098562912, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2098562912, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2098562912_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TileU5BU5D_t1358904253* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2098562912_StaticFields, ___EmptyArray_4)); }
	inline TileU5BU5D_t1358904253* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TileU5BU5D_t1358904253** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TileU5BU5D_t1358904253* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2098562912_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef TILE_T2729441780_H
#define TILE_T2729441780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2729441780  : public RuntimeObject
{
public:
	// System.Int32 Tile::x
	int32_t ___x_0;
	// System.Int32 Tile::z
	int32_t ___z_1;
	// System.Boolean Tile::hasBeenVisited
	bool ___hasBeenVisited_2;
	// System.Boolean Tile::isStartingTile
	bool ___isStartingTile_3;
	// System.Boolean Tile::isEndingTile
	bool ___isEndingTile_4;
	// System.Boolean Tile::isCurrentTile
	bool ___isCurrentTile_5;
	// System.Boolean Tile::hasNorthWall
	bool ___hasNorthWall_6;
	// System.Boolean Tile::hasEastWall
	bool ___hasEastWall_7;
	// System.Boolean Tile::hasSouthWall
	bool ___hasSouthWall_8;
	// System.Boolean Tile::hasWestWall
	bool ___hasWestWall_9;
	// Tile Tile::northTile
	Tile_t2729441780 * ___northTile_10;
	// Tile Tile::westTile
	Tile_t2729441780 * ___westTile_11;
	// Tile Tile::southTile
	Tile_t2729441780 * ___southTile_12;
	// Tile Tile::eastTile
	Tile_t2729441780 * ___eastTile_13;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_z_1() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___z_1)); }
	inline int32_t get_z_1() const { return ___z_1; }
	inline int32_t* get_address_of_z_1() { return &___z_1; }
	inline void set_z_1(int32_t value)
	{
		___z_1 = value;
	}

	inline static int32_t get_offset_of_hasBeenVisited_2() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___hasBeenVisited_2)); }
	inline bool get_hasBeenVisited_2() const { return ___hasBeenVisited_2; }
	inline bool* get_address_of_hasBeenVisited_2() { return &___hasBeenVisited_2; }
	inline void set_hasBeenVisited_2(bool value)
	{
		___hasBeenVisited_2 = value;
	}

	inline static int32_t get_offset_of_isStartingTile_3() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___isStartingTile_3)); }
	inline bool get_isStartingTile_3() const { return ___isStartingTile_3; }
	inline bool* get_address_of_isStartingTile_3() { return &___isStartingTile_3; }
	inline void set_isStartingTile_3(bool value)
	{
		___isStartingTile_3 = value;
	}

	inline static int32_t get_offset_of_isEndingTile_4() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___isEndingTile_4)); }
	inline bool get_isEndingTile_4() const { return ___isEndingTile_4; }
	inline bool* get_address_of_isEndingTile_4() { return &___isEndingTile_4; }
	inline void set_isEndingTile_4(bool value)
	{
		___isEndingTile_4 = value;
	}

	inline static int32_t get_offset_of_isCurrentTile_5() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___isCurrentTile_5)); }
	inline bool get_isCurrentTile_5() const { return ___isCurrentTile_5; }
	inline bool* get_address_of_isCurrentTile_5() { return &___isCurrentTile_5; }
	inline void set_isCurrentTile_5(bool value)
	{
		___isCurrentTile_5 = value;
	}

	inline static int32_t get_offset_of_hasNorthWall_6() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___hasNorthWall_6)); }
	inline bool get_hasNorthWall_6() const { return ___hasNorthWall_6; }
	inline bool* get_address_of_hasNorthWall_6() { return &___hasNorthWall_6; }
	inline void set_hasNorthWall_6(bool value)
	{
		___hasNorthWall_6 = value;
	}

	inline static int32_t get_offset_of_hasEastWall_7() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___hasEastWall_7)); }
	inline bool get_hasEastWall_7() const { return ___hasEastWall_7; }
	inline bool* get_address_of_hasEastWall_7() { return &___hasEastWall_7; }
	inline void set_hasEastWall_7(bool value)
	{
		___hasEastWall_7 = value;
	}

	inline static int32_t get_offset_of_hasSouthWall_8() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___hasSouthWall_8)); }
	inline bool get_hasSouthWall_8() const { return ___hasSouthWall_8; }
	inline bool* get_address_of_hasSouthWall_8() { return &___hasSouthWall_8; }
	inline void set_hasSouthWall_8(bool value)
	{
		___hasSouthWall_8 = value;
	}

	inline static int32_t get_offset_of_hasWestWall_9() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___hasWestWall_9)); }
	inline bool get_hasWestWall_9() const { return ___hasWestWall_9; }
	inline bool* get_address_of_hasWestWall_9() { return &___hasWestWall_9; }
	inline void set_hasWestWall_9(bool value)
	{
		___hasWestWall_9 = value;
	}

	inline static int32_t get_offset_of_northTile_10() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___northTile_10)); }
	inline Tile_t2729441780 * get_northTile_10() const { return ___northTile_10; }
	inline Tile_t2729441780 ** get_address_of_northTile_10() { return &___northTile_10; }
	inline void set_northTile_10(Tile_t2729441780 * value)
	{
		___northTile_10 = value;
		Il2CppCodeGenWriteBarrier((&___northTile_10), value);
	}

	inline static int32_t get_offset_of_westTile_11() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___westTile_11)); }
	inline Tile_t2729441780 * get_westTile_11() const { return ___westTile_11; }
	inline Tile_t2729441780 ** get_address_of_westTile_11() { return &___westTile_11; }
	inline void set_westTile_11(Tile_t2729441780 * value)
	{
		___westTile_11 = value;
		Il2CppCodeGenWriteBarrier((&___westTile_11), value);
	}

	inline static int32_t get_offset_of_southTile_12() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___southTile_12)); }
	inline Tile_t2729441780 * get_southTile_12() const { return ___southTile_12; }
	inline Tile_t2729441780 ** get_address_of_southTile_12() { return &___southTile_12; }
	inline void set_southTile_12(Tile_t2729441780 * value)
	{
		___southTile_12 = value;
		Il2CppCodeGenWriteBarrier((&___southTile_12), value);
	}

	inline static int32_t get_offset_of_eastTile_13() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___eastTile_13)); }
	inline Tile_t2729441780 * get_eastTile_13() const { return ___eastTile_13; }
	inline Tile_t2729441780 ** get_address_of_eastTile_13() { return &___eastTile_13; }
	inline void set_eastTile_13(Tile_t2729441780 * value)
	{
		___eastTile_13 = value;
		Il2CppCodeGenWriteBarrier((&___eastTile_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T2729441780_H
#ifndef STACK_T1043988394_H
#define STACK_T1043988394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t1043988394  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t3614634134* ___contents_1;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_2;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_3;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_4;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_5;

public:
	inline static int32_t get_offset_of_contents_1() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___contents_1)); }
	inline ObjectU5BU5D_t3614634134* get_contents_1() const { return ___contents_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_contents_1() { return &___contents_1; }
	inline void set_contents_1(ObjectU5BU5D_t3614634134* value)
	{
		___contents_1 = value;
		Il2CppCodeGenWriteBarrier((&___contents_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___capacity_4)); }
	inline int32_t get_capacity_4() const { return ___capacity_4; }
	inline int32_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int32_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_modCount_5() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___modCount_5)); }
	inline int32_t get_modCount_5() const { return ___modCount_5; }
	inline int32_t* get_address_of_modCount_5() { return &___modCount_5; }
	inline void set_modCount_5(int32_t value)
	{
		___modCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T1043988394_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef BOARD_T2083606692_H
#define BOARD_T2083606692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board
struct  Board_t2083606692  : public RuntimeObject
{
public:
	// System.Int32 Board::width
	int32_t ___width_0;
	// System.Int32 Board::height
	int32_t ___height_1;
	// Tile Board::startingTile
	Tile_t2729441780 * ___startingTile_2;
	// Tile Board::currentTile
	Tile_t2729441780 * ___currentTile_3;
	// Tile Board::previousTile
	Tile_t2729441780 * ___previousTile_4;
	// Tile[0...,0...] Board::tileContainer
	TileU5B0___U2C0___U5D_t1358904254* ___tileContainer_5;
	// System.Collections.Stack Board::visitedTiles
	Stack_t1043988394 * ___visitedTiles_6;
	// System.Boolean Board::isMapCreated
	bool ___isMapCreated_7;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_startingTile_2() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___startingTile_2)); }
	inline Tile_t2729441780 * get_startingTile_2() const { return ___startingTile_2; }
	inline Tile_t2729441780 ** get_address_of_startingTile_2() { return &___startingTile_2; }
	inline void set_startingTile_2(Tile_t2729441780 * value)
	{
		___startingTile_2 = value;
		Il2CppCodeGenWriteBarrier((&___startingTile_2), value);
	}

	inline static int32_t get_offset_of_currentTile_3() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___currentTile_3)); }
	inline Tile_t2729441780 * get_currentTile_3() const { return ___currentTile_3; }
	inline Tile_t2729441780 ** get_address_of_currentTile_3() { return &___currentTile_3; }
	inline void set_currentTile_3(Tile_t2729441780 * value)
	{
		___currentTile_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentTile_3), value);
	}

	inline static int32_t get_offset_of_previousTile_4() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___previousTile_4)); }
	inline Tile_t2729441780 * get_previousTile_4() const { return ___previousTile_4; }
	inline Tile_t2729441780 ** get_address_of_previousTile_4() { return &___previousTile_4; }
	inline void set_previousTile_4(Tile_t2729441780 * value)
	{
		___previousTile_4 = value;
		Il2CppCodeGenWriteBarrier((&___previousTile_4), value);
	}

	inline static int32_t get_offset_of_tileContainer_5() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___tileContainer_5)); }
	inline TileU5B0___U2C0___U5D_t1358904254* get_tileContainer_5() const { return ___tileContainer_5; }
	inline TileU5B0___U2C0___U5D_t1358904254** get_address_of_tileContainer_5() { return &___tileContainer_5; }
	inline void set_tileContainer_5(TileU5B0___U2C0___U5D_t1358904254* value)
	{
		___tileContainer_5 = value;
		Il2CppCodeGenWriteBarrier((&___tileContainer_5), value);
	}

	inline static int32_t get_offset_of_visitedTiles_6() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___visitedTiles_6)); }
	inline Stack_t1043988394 * get_visitedTiles_6() const { return ___visitedTiles_6; }
	inline Stack_t1043988394 ** get_address_of_visitedTiles_6() { return &___visitedTiles_6; }
	inline void set_visitedTiles_6(Stack_t1043988394 * value)
	{
		___visitedTiles_6 = value;
		Il2CppCodeGenWriteBarrier((&___visitedTiles_6), value);
	}

	inline static int32_t get_offset_of_isMapCreated_7() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___isMapCreated_7)); }
	inline bool get_isMapCreated_7() const { return ___isMapCreated_7; }
	inline bool* get_address_of_isMapCreated_7() { return &___isMapCreated_7; }
	inline void set_isMapCreated_7(bool value)
	{
		___isMapCreated_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARD_T2083606692_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef GAMEOBJECT_T1756533147_H
#define GAMEOBJECT_T1756533147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1756533147  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1756533147_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef BOARDCONTROLLER_T3713948888_H
#define BOARDCONTROLLER_T3713948888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardController
struct  BoardController_t3713948888  : public MonoBehaviour_t1158329972
{
public:
	// Board BoardController::board
	Board_t2083606692 * ___board_2;
	// UnityEngine.GameObject BoardController::tileGO
	GameObject_t1756533147 * ___tileGO_3;
	// UnityEngine.GameObject BoardController::playerGO
	GameObject_t1756533147 * ___playerGO_4;
	// UnityEngine.GameObject[0...,0...] BoardController::goContainer
	GameObjectU5B0___U2C0___U5D_t3057952155* ___goContainer_5;
	// Tile[0...,0...] BoardController::tileData
	TileU5B0___U2C0___U5D_t1358904254* ___tileData_6;

public:
	inline static int32_t get_offset_of_board_2() { return static_cast<int32_t>(offsetof(BoardController_t3713948888, ___board_2)); }
	inline Board_t2083606692 * get_board_2() const { return ___board_2; }
	inline Board_t2083606692 ** get_address_of_board_2() { return &___board_2; }
	inline void set_board_2(Board_t2083606692 * value)
	{
		___board_2 = value;
		Il2CppCodeGenWriteBarrier((&___board_2), value);
	}

	inline static int32_t get_offset_of_tileGO_3() { return static_cast<int32_t>(offsetof(BoardController_t3713948888, ___tileGO_3)); }
	inline GameObject_t1756533147 * get_tileGO_3() const { return ___tileGO_3; }
	inline GameObject_t1756533147 ** get_address_of_tileGO_3() { return &___tileGO_3; }
	inline void set_tileGO_3(GameObject_t1756533147 * value)
	{
		___tileGO_3 = value;
		Il2CppCodeGenWriteBarrier((&___tileGO_3), value);
	}

	inline static int32_t get_offset_of_playerGO_4() { return static_cast<int32_t>(offsetof(BoardController_t3713948888, ___playerGO_4)); }
	inline GameObject_t1756533147 * get_playerGO_4() const { return ___playerGO_4; }
	inline GameObject_t1756533147 ** get_address_of_playerGO_4() { return &___playerGO_4; }
	inline void set_playerGO_4(GameObject_t1756533147 * value)
	{
		___playerGO_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerGO_4), value);
	}

	inline static int32_t get_offset_of_goContainer_5() { return static_cast<int32_t>(offsetof(BoardController_t3713948888, ___goContainer_5)); }
	inline GameObjectU5B0___U2C0___U5D_t3057952155* get_goContainer_5() const { return ___goContainer_5; }
	inline GameObjectU5B0___U2C0___U5D_t3057952155** get_address_of_goContainer_5() { return &___goContainer_5; }
	inline void set_goContainer_5(GameObjectU5B0___U2C0___U5D_t3057952155* value)
	{
		___goContainer_5 = value;
		Il2CppCodeGenWriteBarrier((&___goContainer_5), value);
	}

	inline static int32_t get_offset_of_tileData_6() { return static_cast<int32_t>(offsetof(BoardController_t3713948888, ___tileData_6)); }
	inline TileU5B0___U2C0___U5D_t1358904254* get_tileData_6() const { return ___tileData_6; }
	inline TileU5B0___U2C0___U5D_t1358904254** get_address_of_tileData_6() { return &___tileData_6; }
	inline void set_tileData_6(TileU5B0___U2C0___U5D_t1358904254* value)
	{
		___tileData_6 = value;
		Il2CppCodeGenWriteBarrier((&___tileData_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARDCONTROLLER_T3713948888_H
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t1358904254  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tile_t2729441780 * m_Items[1];

public:
	inline Tile_t2729441780 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t2729441780 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t2729441780 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2729441780 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t2729441780 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t2729441780 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2729441780 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2729441780 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2729441780 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2729441780 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2729441780 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2729441780 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t3057952155  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1756533147 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1756533147 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m310736118_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m4157722533_gshared (List_1_t2058570427 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2375293942_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2062981835_gshared (List_1_t2058570427 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m360069213_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, Transform_t3275118058 * p3, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3829784634_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const RuntimeMethod* method);

// System.Void System.Collections.Stack::.ctor()
extern "C"  void Stack__ctor_m521896492 (Stack_t1043988394 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::.ctor(System.Int32,System.Int32)
extern "C"  void Tile__ctor_m4066184963 (Tile_t2729441780 * __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2083296647 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::resetTile()
extern "C"  void Tile_resetTile_m3487513900 (Tile_t2729441780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile Board::getTileAt(System.Int32,System.Int32)
extern "C"  Tile_t2729441780 * Board_getTileAt_m2811792525 (Board_t2083606692 * __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::setAsStartTile(System.Boolean)
extern "C"  void Tile_setAsStartTile_m3767044686 (Tile_t2729441780 * __this, bool ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::setCurrentTile(System.Boolean)
extern "C"  void Tile_setCurrentTile_m1175752135 (Tile_t2729441780 * __this, bool ___current0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::setTileNeighbours()
extern "C"  void Board_setTileNeighbours_m1395458779 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::createBoard()
extern "C"  void Board_createBoard_m675199575 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile Board::findNeighbour()
extern "C"  Tile_t2729441780 * Board_findNeighbour_m673651070 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::setVisitedTile(System.Boolean)
extern "C"  void Tile_setVisitedTile_m2247861316 (Tile_t2729441780 * __this, bool ___visit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Tile::get_X()
extern "C"  int32_t Tile_get_X_m730199538 (Tile_t2729441780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Tile::get_Z()
extern "C"  int32_t Tile_get_Z_m447874536 (Tile_t2729441780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Tile>::.ctor()
#define List_1__ctor_m3934430897(__this, method) ((  void (*) (List_1_t2098562912 *, const RuntimeMethod*))List_1__ctor_m310736118_gshared)(__this, method)
// System.Boolean Tile::get_HasBeenVisited()
extern "C"  bool Tile_get_HasBeenVisited_m687146924 (Tile_t2729441780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Tile>::Add(!0)
#define List_1_Add_m3103729741(__this, p0, method) ((  void (*) (List_1_t2098562912 *, Tile_t2729441780 *, const RuntimeMethod*))List_1_Add_m4157722533_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Tile>::get_Count()
#define List_1_get_Count_m2155605833(__this, method) ((  int32_t (*) (List_1_t2098562912 *, const RuntimeMethod*))List_1_get_Count_m2375293942_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m3327624272 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<Tile>::get_Item(System.Int32)
#define List_1_get_Item_m1230108560(__this, p0, method) ((  Tile_t2729441780 * (*) (List_1_t2098562912 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2062981835_gshared)(__this, p0, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1825328214 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::.ctor(System.Int32,System.Int32)
extern "C"  void Board__ctor_m3005063621 (Board_t2083606692 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Board::get_Width()
extern "C"  int32_t Board_get_Width_m3164047574 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Board::get_Height()
extern "C"  int32_t Board_get_Height_m288727033 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1555724485 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m443011477 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m3374354972 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1756533147_m351711267(__this /* static, unused */, p0, p1, p2, p3, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , Transform_t3275118058 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m360069213_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3881798623 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m1458854879 (Object_t1021602117 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void Board::newBoard()
extern "C"  void Board_newBoard_m3991470239 (Board_t2083606692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m3490276752 (GameObject_t1756533147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C"  Transform_t3275118058 * Transform_Find_m2140075701 (Transform_t3275118058 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m2159020946 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2693135142 (GameObject_t1756533147 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board::.ctor(System.Int32,System.Int32)
extern "C"  void Board__ctor_m3005063621 (Board_t2083606692 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board__ctor_m3005063621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stack_t1043988394 * L_0 = (Stack_t1043988394 *)il2cpp_codegen_object_new(Stack_t1043988394_il2cpp_TypeInfo_var);
		Stack__ctor_m521896492(L_0, /*hidden argument*/NULL);
		__this->set_visitedTiles_6(L_0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		__this->set_width_0(L_1);
		int32_t L_2 = ___height1;
		__this->set_height_1(L_2);
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)L_3, (il2cpp_array_size_t)L_4 };
		TileU5B0___U2C0___U5D_t1358904254* L_5 = (TileU5B0___U2C0___U5D_t1358904254*)GenArrayNew(TileU5B0___U2C0___U5D_t1358904254_il2cpp_TypeInfo_var, L_6);
		__this->set_tileContainer_5((TileU5B0___U2C0___U5D_t1358904254*)L_5);
		V_0 = 0;
		goto IL_005d;
	}

IL_0033:
	{
		V_1 = 0;
		goto IL_0052;
	}

IL_003a:
	{
		TileU5B0___U2C0___U5D_t1358904254* L_7 = __this->get_tileContainer_5();
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		Tile_t2729441780 * L_12 = (Tile_t2729441780 *)il2cpp_codegen_object_new(Tile_t2729441780_il2cpp_TypeInfo_var);
		Tile__ctor_m4066184963(L_12, L_10, L_11, /*hidden argument*/NULL);
		((TileU5B0___U2C0___U5D_t1358904254*)(TileU5B0___U2C0___U5D_t1358904254*)L_7)->SetAtUnchecked(L_8, L_9, L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___width0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___height1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Int32 Board::get_Width()
extern "C"  int32_t Board_get_Width_m3164047574 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_width_0();
		return L_0;
	}
}
// System.Int32 Board::get_Height()
extern "C"  int32_t Board_get_Height_m288727033 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_height_1();
		return L_0;
	}
}
// Tile Board::getTileAt(System.Int32,System.Int32)
extern "C"  Tile_t2729441780 * Board_getTileAt_m2811792525 (Board_t2083606692 * __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method)
{
	{
		TileU5B0___U2C0___U5D_t1358904254* L_0 = __this->get_tileContainer_5();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___z1;
		Tile_t2729441780 * L_3 = ((TileU5B0___U2C0___U5D_t1358904254*)(TileU5B0___U2C0___U5D_t1358904254*)L_0)->GetAtUnchecked(L_1, L_2);
		return L_3;
	}
}
// System.Void Board::newBoard()
extern "C"  void Board_newBoard_m3991470239 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	Tile_t2729441780 * V_0 = NULL;
	TileU5B0___U2C0___U5D_t1358904254* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		TileU5B0___U2C0___U5D_t1358904254* L_0 = __this->get_tileContainer_5();
		V_1 = (TileU5B0___U2C0___U5D_t1358904254*)L_0;
		TileU5B0___U2C0___U5D_t1358904254* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		TileU5B0___U2C0___U5D_t1358904254* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_004c;
	}

IL_001f:
	{
		V_5 = 0;
		goto IL_003e;
	}

IL_0027:
	{
		TileU5B0___U2C0___U5D_t1358904254* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		Tile_t2729441780 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		Tile_t2729441780 * L_9 = V_0;
		Tile_resetTile_m3487513900(L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_5;
		V_5 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_5;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		Tile_t2729441780 * L_16 = Board_getTileAt_m2811792525(__this, 0, 0, /*hidden argument*/NULL);
		__this->set_startingTile_2(L_16);
		Tile_t2729441780 * L_17 = __this->get_startingTile_2();
		Tile_setAsStartTile_m3767044686(L_17, (bool)1, /*hidden argument*/NULL);
		Tile_t2729441780 * L_18 = __this->get_startingTile_2();
		__this->set_currentTile_3(L_18);
		Tile_t2729441780 * L_19 = __this->get_currentTile_3();
		Tile_setCurrentTile_m1175752135(L_19, (bool)1, /*hidden argument*/NULL);
		Tile_t2729441780 * L_20 = __this->get_startingTile_2();
		__this->set_previousTile_4(L_20);
		Board_setTileNeighbours_m1395458779(__this, /*hidden argument*/NULL);
		Board_createBoard_m675199575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::createBoard()
extern "C"  void Board_createBoard_m675199575 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_createBoard_m675199575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tile_t2729441780 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		goto IL_011e;
	}

IL_0005:
	{
		Tile_t2729441780 * L_0 = Board_findNeighbour_m673651070(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Tile_t2729441780 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		Tile_t2729441780 * L_2 = __this->get_currentTile_3();
		Tile_setVisitedTile_m2247861316(L_2, (bool)1, /*hidden argument*/NULL);
		Stack_t1043988394 * L_3 = __this->get_visitedTiles_6();
		Tile_t2729441780 * L_4 = V_0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.Collections.Stack::Push(System.Object) */, L_3, L_4);
		Tile_t2729441780 * L_5 = __this->get_currentTile_3();
		int32_t L_6 = Tile_get_X_m730199538(L_5, /*hidden argument*/NULL);
		Tile_t2729441780 * L_7 = V_0;
		int32_t L_8 = Tile_get_X_m730199538(L_7, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_6-(int32_t)L_8));
		Tile_t2729441780 * L_9 = __this->get_currentTile_3();
		int32_t L_10 = Tile_get_Z_m447874536(L_9, /*hidden argument*/NULL);
		Tile_t2729441780 * L_11 = V_0;
		int32_t L_12 = Tile_get_Z_m447874536(L_11, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_10-(int32_t)L_12));
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		Tile_t2729441780 * L_14 = __this->get_currentTile_3();
		L_14->set_hasWestWall_9((bool)0);
		Tile_t2729441780 * L_15 = V_0;
		L_15->set_hasEastWall_7((bool)0);
		goto IL_00c0;
	}

IL_006f:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		Tile_t2729441780 * L_17 = __this->get_currentTile_3();
		L_17->set_hasEastWall_7((bool)0);
		Tile_t2729441780 * L_18 = V_0;
		L_18->set_hasWestWall_9((bool)0);
		goto IL_00c0;
	}

IL_008e:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		Tile_t2729441780 * L_20 = __this->get_currentTile_3();
		L_20->set_hasNorthWall_6((bool)0);
		Tile_t2729441780 * L_21 = V_0;
		L_21->set_hasSouthWall_8((bool)0);
		goto IL_00c0;
	}

IL_00ad:
	{
		Tile_t2729441780 * L_22 = __this->get_currentTile_3();
		L_22->set_hasSouthWall_8((bool)0);
		Tile_t2729441780 * L_23 = V_0;
		L_23->set_hasNorthWall_6((bool)0);
	}

IL_00c0:
	{
		Tile_t2729441780 * L_24 = V_0;
		__this->set_currentTile_3(L_24);
		Tile_t2729441780 * L_25 = __this->get_currentTile_3();
		Tile_setCurrentTile_m1175752135(L_25, (bool)1, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_00d8:
	{
		Tile_t2729441780 * L_26 = __this->get_currentTile_3();
		Tile_setVisitedTile_m2247861316(L_26, (bool)1, /*hidden argument*/NULL);
		Stack_t1043988394 * L_27 = __this->get_visitedTiles_6();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_27);
		if (L_28)
		{
			goto IL_00fc;
		}
	}
	{
		__this->set_isMapCreated_7((bool)1);
		return;
	}

IL_00fc:
	{
		Stack_t1043988394 * L_29 = __this->get_visitedTiles_6();
		RuntimeObject * L_30 = VirtFuncInvoker0< RuntimeObject * >::Invoke(18 /* System.Object System.Collections.Stack::Pop() */, L_29);
		__this->set_currentTile_3(((Tile_t2729441780 *)IsInstClass((RuntimeObject*)L_30, Tile_t2729441780_il2cpp_TypeInfo_var)));
		Tile_t2729441780 * L_31 = __this->get_currentTile_3();
		Tile_setCurrentTile_m1175752135(L_31, (bool)1, /*hidden argument*/NULL);
	}

IL_011e:
	{
		bool L_32 = __this->get_isMapCreated_7();
		if (!L_32)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// Tile Board::findNeighbour()
extern "C"  Tile_t2729441780 * Board_findNeighbour_m673651070 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_findNeighbour_m673651070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2098562912 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t2098562912 * L_0 = (List_1_t2098562912 *)il2cpp_codegen_object_new(List_1_t2098562912_il2cpp_TypeInfo_var);
		List_1__ctor_m3934430897(L_0, /*hidden argument*/List_1__ctor_m3934430897_RuntimeMethod_var);
		V_0 = L_0;
		Tile_t2729441780 * L_1 = __this->get_currentTile_3();
		Tile_t2729441780 * L_2 = L_1->get_northTile_10();
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Tile_t2729441780 * L_3 = __this->get_currentTile_3();
		Tile_t2729441780 * L_4 = L_3->get_northTile_10();
		bool L_5 = Tile_get_HasBeenVisited_m687146924(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		List_1_t2098562912 * L_6 = V_0;
		Tile_t2729441780 * L_7 = __this->get_currentTile_3();
		Tile_t2729441780 * L_8 = L_7->get_northTile_10();
		List_1_Add_m3103729741(L_6, L_8, /*hidden argument*/List_1_Add_m3103729741_RuntimeMethod_var);
	}

IL_003c:
	{
		Tile_t2729441780 * L_9 = __this->get_currentTile_3();
		Tile_t2729441780 * L_10 = L_9->get_eastTile_13();
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		Tile_t2729441780 * L_11 = __this->get_currentTile_3();
		Tile_t2729441780 * L_12 = L_11->get_eastTile_13();
		bool L_13 = Tile_get_HasBeenVisited_m687146924(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0072;
		}
	}
	{
		List_1_t2098562912 * L_14 = V_0;
		Tile_t2729441780 * L_15 = __this->get_currentTile_3();
		Tile_t2729441780 * L_16 = L_15->get_eastTile_13();
		List_1_Add_m3103729741(L_14, L_16, /*hidden argument*/List_1_Add_m3103729741_RuntimeMethod_var);
	}

IL_0072:
	{
		Tile_t2729441780 * L_17 = __this->get_currentTile_3();
		Tile_t2729441780 * L_18 = L_17->get_southTile_12();
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		Tile_t2729441780 * L_19 = __this->get_currentTile_3();
		Tile_t2729441780 * L_20 = L_19->get_southTile_12();
		bool L_21 = Tile_get_HasBeenVisited_m687146924(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00a8;
		}
	}
	{
		List_1_t2098562912 * L_22 = V_0;
		Tile_t2729441780 * L_23 = __this->get_currentTile_3();
		Tile_t2729441780 * L_24 = L_23->get_southTile_12();
		List_1_Add_m3103729741(L_22, L_24, /*hidden argument*/List_1_Add_m3103729741_RuntimeMethod_var);
	}

IL_00a8:
	{
		Tile_t2729441780 * L_25 = __this->get_currentTile_3();
		Tile_t2729441780 * L_26 = L_25->get_westTile_11();
		if (!L_26)
		{
			goto IL_00de;
		}
	}
	{
		Tile_t2729441780 * L_27 = __this->get_currentTile_3();
		Tile_t2729441780 * L_28 = L_27->get_westTile_11();
		bool L_29 = Tile_get_HasBeenVisited_m687146924(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00de;
		}
	}
	{
		List_1_t2098562912 * L_30 = V_0;
		Tile_t2729441780 * L_31 = __this->get_currentTile_3();
		Tile_t2729441780 * L_32 = L_31->get_westTile_11();
		List_1_Add_m3103729741(L_30, L_32, /*hidden argument*/List_1_Add_m3103729741_RuntimeMethod_var);
	}

IL_00de:
	{
		List_1_t2098562912 * L_33 = V_0;
		int32_t L_34 = List_1_get_Count_m2155605833(L_33, /*hidden argument*/List_1_get_Count_m2155605833_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_00eb;
		}
	}
	{
		return (Tile_t2729441780 *)NULL;
	}

IL_00eb:
	{
		List_1_t2098562912 * L_35 = V_0;
		int32_t L_36 = List_1_get_Count_m2155605833(L_35, /*hidden argument*/List_1_get_Count_m2155605833_RuntimeMethod_var);
		int32_t L_37 = Random_Range_m3327624272(NULL /*static, unused*/, 0, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		List_1_t2098562912 * L_38 = V_0;
		int32_t L_39 = V_1;
		Tile_t2729441780 * L_40 = List_1_get_Item_m1230108560(L_38, L_39, /*hidden argument*/List_1_get_Item_m1230108560_RuntimeMethod_var);
		return L_40;
	}
}
// System.Void Board::setTileNeighbours()
extern "C"  void Board_setTileNeighbours_m1395458779 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	Tile_t2729441780 * V_0 = NULL;
	TileU5B0___U2C0___U5D_t1358904254* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		TileU5B0___U2C0___U5D_t1358904254* L_0 = __this->get_tileContainer_5();
		V_1 = (TileU5B0___U2C0___U5D_t1358904254*)L_0;
		TileU5B0___U2C0___U5D_t1358904254* L_1 = V_1;
		int32_t L_2 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_2 = L_2;
		TileU5B0___U2C0___U5D_t1358904254* L_3 = V_1;
		int32_t L_4 = Array_GetLength_m2083296647((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_3 = L_4;
		V_4 = 0;
		goto IL_00ec;
	}

IL_001f:
	{
		V_5 = 0;
		goto IL_00de;
	}

IL_0027:
	{
		TileU5B0___U2C0___U5D_t1358904254* L_5 = V_1;
		int32_t L_6 = V_4;
		int32_t L_7 = V_5;
		Tile_t2729441780 * L_8 = (L_5)->GetAtUnchecked(L_6, L_7);
		V_0 = L_8;
		Tile_t2729441780 * L_9 = V_0;
		int32_t L_10 = Tile_get_X_m730199538(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_width_0();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)((int32_t)L_11-(int32_t)1)))))
		{
			goto IL_005f;
		}
	}
	{
		Tile_t2729441780 * L_12 = V_0;
		Tile_t2729441780 * L_13 = V_0;
		int32_t L_14 = Tile_get_X_m730199538(L_13, /*hidden argument*/NULL);
		Tile_t2729441780 * L_15 = V_0;
		int32_t L_16 = Tile_get_Z_m447874536(L_15, /*hidden argument*/NULL);
		Tile_t2729441780 * L_17 = Board_getTileAt_m2811792525(__this, ((int32_t)((int32_t)L_14+(int32_t)1)), L_16, /*hidden argument*/NULL);
		L_12->set_eastTile_13(L_17);
	}

IL_005f:
	{
		Tile_t2729441780 * L_18 = V_0;
		int32_t L_19 = Tile_get_X_m730199538(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		Tile_t2729441780 * L_20 = V_0;
		Tile_t2729441780 * L_21 = V_0;
		int32_t L_22 = Tile_get_X_m730199538(L_21, /*hidden argument*/NULL);
		Tile_t2729441780 * L_23 = V_0;
		int32_t L_24 = Tile_get_Z_m447874536(L_23, /*hidden argument*/NULL);
		Tile_t2729441780 * L_25 = Board_getTileAt_m2811792525(__this, ((int32_t)((int32_t)L_22-(int32_t)1)), L_24, /*hidden argument*/NULL);
		L_20->set_westTile_11(L_25);
	}

IL_0085:
	{
		Tile_t2729441780 * L_26 = V_0;
		int32_t L_27 = Tile_get_Z_m447874536(L_26, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_height_1();
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)((int32_t)L_28-(int32_t)1)))))
		{
			goto IL_00b2;
		}
	}
	{
		Tile_t2729441780 * L_29 = V_0;
		Tile_t2729441780 * L_30 = V_0;
		int32_t L_31 = Tile_get_X_m730199538(L_30, /*hidden argument*/NULL);
		Tile_t2729441780 * L_32 = V_0;
		int32_t L_33 = Tile_get_Z_m447874536(L_32, /*hidden argument*/NULL);
		Tile_t2729441780 * L_34 = Board_getTileAt_m2811792525(__this, L_31, ((int32_t)((int32_t)L_33+(int32_t)1)), /*hidden argument*/NULL);
		L_29->set_northTile_10(L_34);
	}

IL_00b2:
	{
		Tile_t2729441780 * L_35 = V_0;
		int32_t L_36 = Tile_get_Z_m447874536(L_35, /*hidden argument*/NULL);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		Tile_t2729441780 * L_37 = V_0;
		Tile_t2729441780 * L_38 = V_0;
		int32_t L_39 = Tile_get_X_m730199538(L_38, /*hidden argument*/NULL);
		Tile_t2729441780 * L_40 = V_0;
		int32_t L_41 = Tile_get_Z_m447874536(L_40, /*hidden argument*/NULL);
		Tile_t2729441780 * L_42 = Board_getTileAt_m2811792525(__this, L_39, ((int32_t)((int32_t)L_41-(int32_t)1)), /*hidden argument*/NULL);
		L_37->set_southTile_12(L_42);
	}

IL_00d8:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00de:
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_3;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_46 = V_4;
		V_4 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_47 = V_4;
		int32_t L_48 = V_2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
// System.Void BoardController::.ctor()
extern "C"  void BoardController__ctor_m320228913 (BoardController_t3713948888 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoardController::Start()
extern "C"  void BoardController_Start_m2403867529 (BoardController_t3713948888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardController_Start_m2403867529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Board_t2083606692 * L_0 = (Board_t2083606692 *)il2cpp_codegen_object_new(Board_t2083606692_il2cpp_TypeInfo_var);
		Board__ctor_m3005063621(L_0, ((int32_t)20), ((int32_t)20), /*hidden argument*/NULL);
		__this->set_board_2(L_0);
		Board_t2083606692 * L_1 = __this->get_board_2();
		int32_t L_2 = Board_get_Width_m3164047574(L_1, /*hidden argument*/NULL);
		Board_t2083606692 * L_3 = __this->get_board_2();
		int32_t L_4 = Board_get_Height_m288727033(L_3, /*hidden argument*/NULL);
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_4 };
		GameObjectU5B0___U2C0___U5D_t3057952155* L_5 = (GameObjectU5B0___U2C0___U5D_t3057952155*)GenArrayNew(GameObjectU5B0___U2C0___U5D_t3057952155_il2cpp_TypeInfo_var, L_6);
		__this->set_goContainer_5((GameObjectU5B0___U2C0___U5D_t3057952155*)L_5);
		Board_t2083606692 * L_7 = __this->get_board_2();
		int32_t L_8 = Board_get_Width_m3164047574(L_7, /*hidden argument*/NULL);
		Board_t2083606692 * L_9 = __this->get_board_2();
		int32_t L_10 = Board_get_Height_m288727033(L_9, /*hidden argument*/NULL);
		il2cpp_array_size_t L_12[] = { (il2cpp_array_size_t)L_8, (il2cpp_array_size_t)L_10 };
		TileU5B0___U2C0___U5D_t1358904254* L_11 = (TileU5B0___U2C0___U5D_t1358904254*)GenArrayNew(TileU5B0___U2C0___U5D_t1358904254_il2cpp_TypeInfo_var, L_12);
		__this->set_tileData_6((TileU5B0___U2C0___U5D_t1358904254*)L_11);
		V_0 = 0;
		goto IL_0102;
	}

IL_0058:
	{
		V_1 = 0;
		goto IL_00ed;
	}

IL_005f:
	{
		GameObjectU5B0___U2C0___U5D_t3057952155* L_13 = __this->get_goContainer_5();
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		GameObject_t1756533147 * L_16 = __this->get_tileGO_3();
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		Vector3_t2243707580  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m1555724485((&L_19), (((float)((float)L_17))), (-0.5f), (((float)((float)L_18))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t4030073918_il2cpp_TypeInfo_var);
		Quaternion_t4030073918  L_20 = Quaternion_get_identity_m443011477(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_21 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_22 = Object_Instantiate_TisGameObject_t1756533147_m351711267(NULL /*static, unused*/, L_16, L_19, L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m351711267_RuntimeMethod_var);
		((GameObjectU5B0___U2C0___U5D_t3057952155*)(GameObjectU5B0___U2C0___U5D_t3057952155*)L_13)->SetAtUnchecked(L_14, L_15, L_22);
		GameObjectU5B0___U2C0___U5D_t3057952155* L_23 = __this->get_goContainer_5();
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		GameObject_t1756533147 * L_26 = ((GameObjectU5B0___U2C0___U5D_t3057952155*)(GameObjectU5B0___U2C0___U5D_t3057952155*)L_23)->GetAtUnchecked(L_24, L_25);
		ObjectU5BU5D_t3614634134* L_27 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_27, _stringLiteral3645121135);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3645121135);
		ObjectU5BU5D_t3614634134* L_28 = L_27;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3614634134* L_32 = L_28;
		ArrayElementTypeCheck (L_32, _stringLiteral372029427);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral372029427);
		ObjectU5BU5D_t3614634134* L_33 = L_32;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_35);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m3881798623(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		Object_set_name_m1458854879(L_26, L_37, /*hidden argument*/NULL);
		TileU5B0___U2C0___U5D_t1358904254* L_38 = __this->get_tileData_6();
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		Board_t2083606692 * L_41 = __this->get_board_2();
		int32_t L_42 = V_1;
		int32_t L_43 = V_0;
		Tile_t2729441780 * L_44 = Board_getTileAt_m2811792525(L_41, L_42, L_43, /*hidden argument*/NULL);
		((TileU5B0___U2C0___U5D_t1358904254*)(TileU5B0___U2C0___U5D_t1358904254*)L_38)->SetAtUnchecked(L_39, L_40, L_44);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_00ed:
	{
		int32_t L_46 = V_1;
		Board_t2083606692 * L_47 = __this->get_board_2();
		int32_t L_48 = Board_get_Width_m3164047574(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_50 = V_0;
		Board_t2083606692 * L_51 = __this->get_board_2();
		int32_t L_52 = Board_get_Height_m288727033(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0058;
		}
	}
	{
		GameObject_t1756533147 * L_53 = __this->get_playerGO_4();
		Vector3_t2243707580  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector3__ctor_m1555724485((&L_54), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t4030073918_il2cpp_TypeInfo_var);
		Quaternion_t4030073918  L_55 = Quaternion_get_identity_m443011477(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_53, L_54, L_55, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var);
		Board_t2083606692 * L_56 = __this->get_board_2();
		Board_newBoard_m3991470239(L_56, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoardController::Update()
extern "C"  void BoardController_Update_m224668774 (BoardController_t3713948888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardController_Update_m224668774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tile_t2729441780 * V_2 = NULL;
	GameObject_t1756533147 * V_3 = NULL;
	{
		V_0 = 0;
		goto IL_00c3;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_000e:
	{
		TileU5B0___U2C0___U5D_t1358904254* L_0 = __this->get_tileData_6();
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		Tile_t2729441780 * L_3 = ((TileU5B0___U2C0___U5D_t1358904254*)(TileU5B0___U2C0___U5D_t1358904254*)L_0)->GetAtUnchecked(L_1, L_2);
		V_2 = L_3;
		GameObjectU5B0___U2C0___U5D_t3057952155* L_4 = __this->get_goContainer_5();
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		GameObject_t1756533147 * L_7 = ((GameObjectU5B0___U2C0___U5D_t3057952155*)(GameObjectU5B0___U2C0___U5D_t3057952155*)L_4)->GetAtUnchecked(L_5, L_6);
		V_3 = L_7;
		GameObject_t1756533147 * L_8 = V_3;
		Transform_t3275118058 * L_9 = GameObject_get_transform_m3490276752(L_8, /*hidden argument*/NULL);
		Transform_t3275118058 * L_10 = Transform_Find_m2140075701(L_9, _stringLiteral1625084853, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_11 = Component_get_gameObject_m2159020946(L_10, /*hidden argument*/NULL);
		Tile_t2729441780 * L_12 = V_2;
		bool L_13 = L_12->get_hasNorthWall_6();
		GameObject_SetActive_m2693135142(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_14 = V_3;
		Transform_t3275118058 * L_15 = GameObject_get_transform_m3490276752(L_14, /*hidden argument*/NULL);
		Transform_t3275118058 * L_16 = Transform_Find_m2140075701(L_15, _stringLiteral217700537, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_17 = Component_get_gameObject_m2159020946(L_16, /*hidden argument*/NULL);
		Tile_t2729441780 * L_18 = V_2;
		bool L_19 = L_18->get_hasEastWall_7();
		GameObject_SetActive_m2693135142(L_17, L_19, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_20 = V_3;
		Transform_t3275118058 * L_21 = GameObject_get_transform_m3490276752(L_20, /*hidden argument*/NULL);
		Transform_t3275118058 * L_22 = Transform_Find_m2140075701(L_21, _stringLiteral1639333311, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_23 = Component_get_gameObject_m2159020946(L_22, /*hidden argument*/NULL);
		Tile_t2729441780 * L_24 = V_2;
		bool L_25 = L_24->get_hasSouthWall_8();
		GameObject_SetActive_m2693135142(L_23, L_25, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_26 = V_3;
		Transform_t3275118058 * L_27 = GameObject_get_transform_m3490276752(L_26, /*hidden argument*/NULL);
		Transform_t3275118058 * L_28 = Transform_Find_m2140075701(L_27, _stringLiteral2758309879, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_29 = Component_get_gameObject_m2159020946(L_28, /*hidden argument*/NULL);
		Tile_t2729441780 * L_30 = V_2;
		bool L_31 = L_30->get_hasWestWall_9();
		GameObject_SetActive_m2693135142(L_29, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_33 = V_1;
		Board_t2083606692 * L_34 = __this->get_board_2();
		int32_t L_35 = Board_get_Width_m3164047574(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_37 = V_0;
		Board_t2083606692 * L_38 = __this->get_board_2();
		int32_t L_39 = Board_get_Height_m288727033(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Tile::.ctor(System.Int32,System.Int32)
extern "C"  void Tile__ctor_m4066184963 (Tile_t2729441780 * __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method)
{
	{
		__this->set_hasNorthWall_6((bool)1);
		__this->set_hasEastWall_7((bool)1);
		__this->set_hasSouthWall_8((bool)1);
		__this->set_hasWestWall_9((bool)1);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___x0;
		__this->set_x_0(L_0);
		int32_t L_1 = ___z1;
		__this->set_z_1(L_1);
		return;
	}
}
// System.Int32 Tile::get_X()
extern "C"  int32_t Tile_get_X_m730199538 (Tile_t2729441780 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_x_0();
		return L_0;
	}
}
// System.Int32 Tile::get_Z()
extern "C"  int32_t Tile_get_Z_m447874536 (Tile_t2729441780 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_z_1();
		return L_0;
	}
}
// System.Boolean Tile::get_HasBeenVisited()
extern "C"  bool Tile_get_HasBeenVisited_m687146924 (Tile_t2729441780 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_hasBeenVisited_2();
		return L_0;
	}
}
// System.Void Tile::setAsStartTile(System.Boolean)
extern "C"  void Tile_setAsStartTile_m3767044686 (Tile_t2729441780 * __this, bool ___start0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___start0;
		__this->set_isStartingTile_3(L_0);
		__this->set_hasSouthWall_8((bool)0);
		return;
	}
}
// System.Void Tile::setAsEndTile(System.Boolean)
extern "C"  void Tile_setAsEndTile_m1625395195 (Tile_t2729441780 * __this, bool ___end0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___end0;
		__this->set_isEndingTile_4(L_0);
		return;
	}
}
// System.Void Tile::setCurrentTile(System.Boolean)
extern "C"  void Tile_setCurrentTile_m1175752135 (Tile_t2729441780 * __this, bool ___current0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___current0;
		__this->set_isCurrentTile_5(L_0);
		return;
	}
}
// System.Void Tile::setVisitedTile(System.Boolean)
extern "C"  void Tile_setVisitedTile_m2247861316 (Tile_t2729441780 * __this, bool ___visit0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___visit0;
		__this->set_hasBeenVisited_2(L_0);
		return;
	}
}
// System.Void Tile::resetTile()
extern "C"  void Tile_resetTile_m3487513900 (Tile_t2729441780 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hasBeenVisited_2((bool)0);
		__this->set_isCurrentTile_5((bool)0);
		__this->set_isEndingTile_4((bool)0);
		__this->set_isStartingTile_3((bool)0);
		__this->set_hasNorthWall_6((bool)1);
		__this->set_hasSouthWall_8((bool)1);
		__this->set_hasEastWall_7((bool)1);
		__this->set_hasWestWall_9((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
