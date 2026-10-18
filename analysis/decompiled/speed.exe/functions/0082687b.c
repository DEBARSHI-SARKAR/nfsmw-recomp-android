/* speed.exe 0082687b FUN_0082687b; analysis pseudocode, not buildable source.
 * calls 00828976 FUN_00828976
 * calls 00828840 FUN_00828840
 * calls 008287ae FUN_008287ae
 */

undefined4 FUN_0082687b(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (0 < param_2) {
    iVar1 = FUN_00828976(&param_4,param_2);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    param_2 = param_2 - iVar1;
    param_4 = param_4 + iVar1 * 4;
    if (iVar1 < param_2) {
      local_c = 0;
      local_10 = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
      local_8 = 1;
      FUN_00828840(&local_10,0);
      iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
      FUN_008287ae(*(undefined4 *)(param_1 + 0x2c),iVar1 * 4 + 4,iVar1 + 1);
    }
  }
  return 1;
}

