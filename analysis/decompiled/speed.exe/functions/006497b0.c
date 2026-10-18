/* speed.exe 006497b0 FUN_006497b0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00649660 FUN_00649660
 * calls 00404db0 FUN_00404db0
 * calls 006495f0 FUN_006495f0
 * calls 00649590 FUN_00649590
 * calls 00649380 FUN_00649380
 */

undefined4 * __thiscall
FUN_006497b0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST1;
  undefined1 *puVar2;
  undefined1 local_50 [76];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00649380();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(short *)(param_1 + 0x1e) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return param_2;
  }
  FUN_006495f0(param_3);
  FUN_007c4b80();
  iVar1 = FUN_007c4b80();
  if ((*(int *)(param_1 + 4) == 2) &&
     ((iVar1 < 0 || ((int)(*(ushort *)(param_1 + 0x1e) - 1) <= iVar1)))) {
    FUN_00404db0(local_50,0x10,4,&LAB_00402310);
    FUN_00649660(local_50,iVar1 + -1);
    puVar2 = local_50;
  }
  else {
    puVar2 = (undefined1 *)(iVar1 * 0x10 + -0x10 + *(int *)(param_1 + 0x24));
  }
  FUN_00649590(param_2,(float)(extraout_ST1 - extraout_ST0),param_4,puVar2);
  return param_2;
}

