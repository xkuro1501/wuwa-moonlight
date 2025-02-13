#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPuertsWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KuroPuertsWrapper.KuroDataTableFunctionLibrary.GetDataTableRowFromName
// 0x0028 (0x0028 - 0x0000)
struct KuroDataTableFunctionLibrary_GetDataTableRowFromName final
{
public:
	class UDataTable*                             Table;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RowName;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                          OutRow;                                            // 0x0018(0x0008)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DA5[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroDataTableFunctionLibrary_GetDataTableRowFromName) == 0x000008, "Wrong alignment on KuroDataTableFunctionLibrary_GetDataTableRowFromName");
static_assert(sizeof(KuroDataTableFunctionLibrary_GetDataTableRowFromName) == 0x000028, "Wrong size on KuroDataTableFunctionLibrary_GetDataTableRowFromName");
static_assert(offsetof(KuroDataTableFunctionLibrary_GetDataTableRowFromName, Table) == 0x000000, "Member 'KuroDataTableFunctionLibrary_GetDataTableRowFromName::Table' has a wrong offset!");
static_assert(offsetof(KuroDataTableFunctionLibrary_GetDataTableRowFromName, RowName) == 0x000008, "Member 'KuroDataTableFunctionLibrary_GetDataTableRowFromName::RowName' has a wrong offset!");
static_assert(offsetof(KuroDataTableFunctionLibrary_GetDataTableRowFromName, OutRow) == 0x000018, "Member 'KuroDataTableFunctionLibrary_GetDataTableRowFromName::OutRow' has a wrong offset!");
static_assert(offsetof(KuroDataTableFunctionLibrary_GetDataTableRowFromName, ReturnValue) == 0x000020, "Member 'KuroDataTableFunctionLibrary_GetDataTableRowFromName::ReturnValue' has a wrong offset!");

}

