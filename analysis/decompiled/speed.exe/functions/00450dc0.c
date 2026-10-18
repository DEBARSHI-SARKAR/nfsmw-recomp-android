/* speed.exe 00450dc0 FUN_00450dc0; analysis pseudocode, not buildable source.
 * calls 00450c30 FUN_00450c30
 * calls 00652ad0 _malloc
 * calls 0044fbb0 FUN_0044fbb0
 */

undefined4 __thiscall
FUN_00450dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  
  pvVar3 = _malloc(0x120);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0044fbb0(param_2,param_3,param_4,param_5);
  }
  cVar2 = FUN_00450c30();
  if (cVar2 != '\0') {
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(iVar4 + 4);
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    *puVar1 = piVar5;
    *(int **)(param_1 + 8) = piVar5;
    piVar5[1] = (int)puVar1;
    *piVar5 = param_1 + 4;
    return *(undefined4 *)(iVar4 + 0xc);
  }
  return 0;
}

