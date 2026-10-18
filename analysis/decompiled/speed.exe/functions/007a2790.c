/* speed.exe 007a2790 FUN_007a2790; analysis pseudocode, not buildable source.
 * calls 0075bad0 FUN_0075bad0
 * calls 0075c6c0 FUN_0075c6c0
 * calls 00747f10 FUN_00747f10
 * calls 0075c760 FUN_0075c760
 */

void __thiscall FUN_007a2790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    FUN_0075bad0(param_1[0x189]);
  }
  uVar1 = 1;
  if (*(char *)((int)param_1 + 0x62d) == '\0') {
    uVar1 = 2;
  }
  FUN_00747f10(uVar1);
  uVar1 = FUN_0075c6c0(param_2);
  param_1[0x189] = uVar1;
  FUN_0075c760(0,0);
  *(undefined1 *)(param_1 + 0x188) = 1;
  puVar3 = param_1;
  for (iVar2 = 0xc4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x18b) = 0;
  return;
}

