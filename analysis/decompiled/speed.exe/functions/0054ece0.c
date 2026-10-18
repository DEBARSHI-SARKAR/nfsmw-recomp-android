/* speed.exe 0054ece0 FUN_0054ece0; analysis pseudocode, not buildable source.
 * calls 005e8b20 FUN_005e8b20
 * calls 004b7b40 FUN_004b7b40
 * calls 0041eba0 FUN_0041eba0
 */

void __thiscall FUN_0054ece0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  piVar1 = param_2;
  if (param_2 != (int *)0xffffffff) {
    if ((DAT_00925e90 == 6) &&
       (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0 ||
        ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)))) {
      if (DAT_0092d884 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*DAT_0092d87c;
      }
      iVar3 = (**(code **)(*piVar4 + 4))();
      if ((iVar3 != 0) && (iVar3 = FUN_005e8b20(iVar3), iVar3 != 0)) {
        piVar4 = (int *)FUN_0041eba0();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x20))();
        iVar3 = (**(code **)(*piVar4 + 0x20))();
        if (iVar3 != 0) {
          puVar5 = &param_2;
          (**(code **)(*piVar4 + 0x20))(puVar5);
          cVar2 = FUN_004b7b40(puVar5);
          if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 8))(), cVar2 != '\0')) {
            return;
          }
        }
      }
    }
    *(undefined1 *)((int)piVar1 + param_1 + 2) = 1;
  }
  return;
}

