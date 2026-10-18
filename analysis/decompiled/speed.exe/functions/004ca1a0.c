/* speed.exe 004ca1a0 FUN_004ca1a0; analysis pseudocode, not buildable source.
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_004ca1a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0xffffffff;
  uVar3 = FUN_004522f0(&DAT_00890978);
  uVar2 = FUN_004519d0(&DAT_00890978);
  param_1[3] = (int)((ulonglong)uVar3 >> 0x20);
  param_1[5] = &DAT_00890978;
  param_1[2] = (int)uVar3;
  param_1[4] = uVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x12] - iVar1 >> 2) << 2,0);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x16] - iVar1 >> 2) << 2,0);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

