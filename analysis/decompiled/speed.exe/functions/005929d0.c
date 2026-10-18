/* speed.exe 005929d0 FUN_005929d0; analysis pseudocode, not buildable source.
 * calls 00586760 FUN_00586760
 * calls 00589870 FUN_00589870
 * calls 00586ca0 FUN_00586ca0
 * calls 00592410 FUN_00592410
 */

void __thiscall FUN_005929d0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (*(char *)(param_2 + 0x28) != '\0')) &&
     (iVar1 = FUN_00592410(param_2), iVar1 != 0)) {
    if (param_1[0xb] != 0) {
      FUN_00586760(0x7ab5521a);
    }
    param_1[0xb] = param_2;
    param_1[9] = iVar1;
    FUN_00586760(0x249db7b7);
    (**(code **)(*param_1 + 4))();
    if ((char)param_1[0x28] != '\0') {
      uVar2 = FUN_00586ca0(param_1[9]);
      FUN_00589870(param_1[6],param_1[7],param_1[8],uVar2);
    }
    *(undefined1 *)((int)param_1 + 0xa1) = 0;
  }
  return;
}

