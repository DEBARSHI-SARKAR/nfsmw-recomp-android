/* speed.exe 005ba470 FUN_005ba470; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005af2b0 FUN_005af2b0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __fastcall FUN_005ba470(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087409b;
  piVar5 = (int *)0x0;
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  ppvVar3 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar3, puVar1 != (undefined4 *)0x0) {
    FUN_005af2b0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    ppvVar3 = ExceptionList;
    puVar1 = *(undefined4 **)(param_1 + 0x14);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_007c7250(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    piVar4 = _malloc(iVar2 * 0x10 + 4);
    uStack_4 = 0;
    if (piVar4 != (int *)0x0) {
      piVar5 = piVar4 + 1;
      *piVar4 = iVar2;
      _eh_vector_constructor_iterator_
                (piVar5,0x10,iVar2,(_func_void_void_ptr *)&LAB_005ad390,FUN_005b9540);
    }
  }
  *(int **)(param_1 + 8) = piVar5;
  ExceptionList = pvStack_c;
  return;
}

