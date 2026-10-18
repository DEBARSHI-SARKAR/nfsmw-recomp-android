/* speed.exe 00761a80 FUN_00761a80; analysis pseudocode, not buildable source.
 * calls 004e4ea0 FUN_004e4ea0
 * calls 00761700 FUN_00761700
 * calls 0078f920 FUN_0078f920
 * calls 0078a3a0 FUN_0078a3a0
 * calls 0045a430 FUN_0045a430
 * calls 0078f8c0 FUN_0078f8c0
 */

void __thiscall FUN_00761a80(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_24 [36];
  
  FUN_0078f920(local_24,0x10);
  FUN_00761700(param_2,0,0,local_24);
  iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
  FUN_0078f8c0((undefined4 *)(iVar1 + 0xfa4),4);
  param_3 = 0;
  FUN_0078a3a0(&param_3,1);
  *(bool *)(iVar1 + 0xfa8) = param_3 != 0;
  if (param_3 != 0) {
    FUN_0078f8c0(iVar1 + 0xfac,0x198);
  }
  FUN_004e4ea0(*(undefined4 *)(iVar1 + 0xfa4),0,0);
  FUN_0045a430();
  return;
}

