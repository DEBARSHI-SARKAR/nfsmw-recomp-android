/* speed.exe 0071fec0 FUN_0071fec0; analysis pseudocode, not buildable source.
 * calls 007062f0 FUN_007062f0
 * calls 00705820 FUN_00705820
 * calls 00706380 FUN_00706380
 * calls 00706260 FUN_00706260
 * calls 005cc240 FUN_005cc240
 * calls 00705390 FUN_00705390
 */

undefined4 * __fastcall FUN_0071fec0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008803c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b259c;
  uVar1 = FUN_00705820();
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[4] = &PTR_FUN_008b2598;
  param_1[8] = 0xc;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = DAT_00925ae8;
  param_1[0xc] = DAT_00925ae8;
  param_1[0xd] = DAT_00925ae8;
  param_1[0xe] = DAT_00925ae8;
  param_1[0xf] = DAT_00925ae8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = DAT_00925ae8;
  param_1[0x15] = 2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = DAT_008a2fb4;
  param_1[0x1c] = DAT_008a2fb8;
  param_1[0x1d] = DAT_008a2fbc;
  param_1[0x1e] = DAT_008a2fb4;
  param_1[0x1f] = DAT_008a2fb8;
  param_1[0x20] = DAT_008a2fbc;
  param_1[0x21] = DAT_008a2fb4;
  param_1[0x22] = DAT_008a2fb8;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x23] = DAT_008a2fbc;
  FUN_005cc240("BlewByCop");
  uVar1 = FUN_00706260(param_1,FUN_00708050);
  param_1[0x24] = uVar1;
  FUN_005cc240("MomentStrm");
  uVar1 = FUN_00706260(param_1,FUN_0070abc0);
  param_1[0x25] = uVar1;
  uVar1 = FUN_007062f0(param_1,&LAB_0071ea00);
  param_1[0x26] = uVar1;
  FUN_005cc240("TunnelUpdate");
  uVar1 = FUN_00706380(param_1,&LAB_00704950);
  param_1[0x27] = uVar1;
  FUN_00705390();
  ExceptionList = local_c;
  return param_1;
}

