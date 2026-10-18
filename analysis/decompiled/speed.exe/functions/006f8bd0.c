/* speed.exe 006f8bd0 FUN_006f8bd0; analysis pseudocode, not buildable source.
 * calls 0061f4f0 FUN_0061f4f0
 * calls 005f6050 FUN_005f6050
 * calls 005dbd50 FUN_005dbd50
 * calls 0061f7b0 FUN_0061f7b0
 * calls 006f82f0 FUN_006f82f0
 * calls 0060a1d0 FUN_0060a1d0
 * calls 0061f9a0 FUN_0061f9a0
 */

void __fastcall FUN_006f8bd0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b0b00;
  param_1[2] = &PTR_LAB_008b0af8;
  param_1[0xb] = &PTR_LAB_008b0ae4;
  param_1[0xe] = &PTR_LAB_008b0ac8;
  local_4 = 0;
  FUN_005f6050();
  FUN_0061f7b0();
  FUN_0060a1d0();
  FUN_0061f9a0();
  FUN_0061f4f0();
  FUN_005dbd50();
  if (param_1[0x12] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar1 = DAT_009885d0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (*(int *)(iVar1 + 0x20) == param_1[0x12]) goto LAB_006f8c55;
    }
    iVar1 = 0;
LAB_006f8c55:
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
  }
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

