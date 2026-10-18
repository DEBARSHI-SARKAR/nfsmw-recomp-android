/* speed.exe 004f8830 FUN_004f8830; analysis pseudocode, not buildable source.
 * calls 004eb180 FUN_004eb180
 * calls 004eb210 FUN_004eb210
 * calls 0045da30 FUN_0045da30
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_004f8830(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086db88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_009142d8 = 0;
  DAT_009142dc = 0;
  param_1[9] = 0;
  param_1[0x44] = 0;
  param_1[0x11] = 0;
  param_1[0x45] = 0x40;
  *param_1 = &PTR_FUN_00899b80;
  param_1[0x55] = 0;
  param_1[0x56] = 0xffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0;
  local_4 = 0;
  param_1[0x5a] = 0;
  FUN_005cc240("Pathfinder5");
  uVar1 = FUN_004eb180(param_1,FUN_004e7bc0);
  param_1[0x5b] = uVar1;
  FUN_005cc240("EATraxInit");
  uVar1 = FUN_004eb180(param_1,&LAB_004df420);
  param_1[0x5c] = uVar1;
  FUN_005cc240("Event");
  uVar1 = FUN_004eb180(param_1,&LAB_004f0770);
  param_1[0x5d] = uVar1;
  FUN_005cc240("Control");
  uVar1 = FUN_004eb180(param_1,&LAB_004dfb80);
  param_1[0x5e] = uVar1;
  FUN_005cc240("PartUpdate");
  uVar1 = FUN_004eb180(param_1,&LAB_004dfbe0);
  param_1[0x5f] = uVar1;
  uVar1 = FUN_004eb210(param_1,&DAT_004dfc20);
  param_1[0x60] = uVar1;
  FUN_005cc240("InteractiveDone");
  uVar1 = FUN_004eb180(param_1,&LAB_004dfc30);
  param_1[0x61] = uVar1;
  FUN_005cc240(&DAT_00899b60);
  uVar1 = FUN_004eb180(param_1,&LAB_004dfc40);
  param_1[0x62] = uVar1;
  param_1[0x54] = 0xffffffff;
  param_1[0x53] = 3;
  param_1[0x52] = 3;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x139) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0xffffffff;
  iVar2 = FUN_0045da30(4);
  param_1[0x51] = iVar2 + 1U & 3;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x119) = 0;
  param_1[0x45] = 0x40;
  param_1[0x5a] = 0;
  param_1[0x4d] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x11a) = 0;
  param_1[0x4c] = 0;
  ExceptionList = local_c;
  return param_1;
}

