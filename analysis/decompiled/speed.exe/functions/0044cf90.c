/* speed.exe 0044cf90 FUN_0044cf90; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 0044ae10 FUN_0044ae10
 */

void __thiscall FUN_0044cf90(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = FUN_0044ae10(param_2);
  if (iVar1 == 0) {
    puVar2 = _malloc(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_00893720;
      puVar2[3] = param_2;
      puVar2[4] = (uint)param_3;
      piVar3 = puVar2 + 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x34);
    *puVar2 = piVar3;
    *(int **)(param_1 + 0x34) = piVar3;
    piVar3[1] = (int)puVar2;
    *piVar3 = param_1 + 0x30;
  }
  return;
}

