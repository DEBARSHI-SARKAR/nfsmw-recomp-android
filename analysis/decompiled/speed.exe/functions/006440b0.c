/* speed.exe 006440b0 FUN_006440b0; analysis pseudocode, not buildable source.
 * calls 00628f10 FUN_00628f10
 * calls 00660200 FUN_00660200
 * calls 00642d70 FUN_00642d70
 * calls 00633d10 FUN_00633d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006440b0(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[1] != *(int *)(param_1 + 0x268)) {
    return 0;
  }
  if (*param_2 != 0x88) {
    _DAT_009203f8 = DAT_00925b14;
  }
  FUN_00660200(*(undefined4 *)(param_1 + 0x27c),8,2);
  FUN_00660200(*param_2,8,2);
  FUN_00660200(param_2[2],0x20,2);
  iVar1 = *param_2;
  if (iVar1 == 0x88) {
    FUN_00642d70();
    *(undefined1 *)(param_1 + 0x280) = 0;
    FUN_00633d10();
  }
  else if (iVar1 == 0x87) {
    FUN_00642d70();
    *(undefined1 *)(param_1 + 0x280) = 1;
    FUN_00633d10();
  }
  else if (iVar1 == 0x89) {
    FUN_00642d70();
  }
  *(undefined4 *)(param_1 + 0x284) = DAT_00925b14;
  FUN_00628f10(param_2);
  return 1;
}

