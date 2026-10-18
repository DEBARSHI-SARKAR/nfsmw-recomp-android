/* speed.exe 005750d0 FUN_005750d0; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 00524850 FUN_00524850
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 */

char * __thiscall
FUN_005750d0(char *param_1,undefined4 param_2,int param_3,char param_4,char param_5,char param_6)

{
  undefined4 uVar1;
  undefined1 local_20 [32];
  
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = '\0';
  param_1[3] = param_6;
  param_1[4] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  if (param_3 == 0) {
    return param_1;
  }
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Backing");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Handle");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Arrow_1");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Arrow_2");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Backing_End_1");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_00515e20(local_20,0x20,&DAT_00893b40,param_3,"_Backing_End_2");
  uVar1 = FUN_005af1c0(local_20);
  uVar1 = FUN_00524850(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  FUN_00514fd0(*(undefined4 *)(param_1 + 0x40),param_1 + 0x20,param_1 + 0x24);
  FUN_00515520(*(undefined4 *)(param_1 + 0x40),param_1 + 0x28,param_1 + 0x2c);
  if (param_1[1] != '\0') {
    if (*param_1 != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      return param_1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    return param_1;
  }
  FUN_00515520(*(undefined4 *)(param_1 + 0x44),param_1 + 0x30,param_1 + 0x34);
  return param_1;
}

