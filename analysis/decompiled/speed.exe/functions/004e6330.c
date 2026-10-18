/* speed.exe 004e6330 FUN_004e6330; analysis pseudocode, not buildable source.
 * calls 004b0790 FUN_004b0790
 * calls 0045f340 FUN_0045f340
 * calls 006e8df0 FUN_006e8df0
 * calls 004d9600 FUN_004d9600
 */

void __thiscall FUN_004e6330(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  int iStack_8;
  int *local_4;
  
  local_4 = DAT_00913e74;
  if (DAT_00913e74 != DAT_00913e74 + DAT_00913e7c) {
    do {
      if (((*(char *)(*local_4 + 0x11) != '\0') && (iVar1 = *(int *)(*local_4 + 0x14), iVar1 != 0))
         && (iVar4 = param_1[7], *(int *)(iVar1 + 0x228) == iVar4)) {
        for (piVar3 = (int *)param_1[4];
            (piVar3 != (int *)0x0 && (((char)piVar3[0xe] == '\0' || (piVar3[0xd] != iVar1))));
            piVar3 = (int *)piVar3[1]) {
        }
        if ((*(char *)(iVar1 + 0x22c) == '\0') &&
           (((iVar4 != 1 && (iVar4 != 2)) ||
            ((DAT_009885c8 == (int *)0x0 ||
             (cVar2 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar2 == '\0')))))) {
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x1c))();
          }
        }
        else {
          iStack_8 = 0;
          FUN_004b0790(iVar1 + 0x40,1,&iStack_8);
          fVar5 = (float10)FUN_0045f340(iVar1 + 0x40,&DAT_00914430 + iStack_8 * 4);
          if (piVar3 == (int *)0x0) {
            if ((((float10)(float)param_1[8] > fVar5) &&
                (piVar3 = (int *)(**(code **)(*param_1 + 0xc))(iVar1), piVar3 != (int *)0x0)) &&
               ((param_1[7] != 2 || (iVar4 = FUN_006e8df0(), iVar4 != 1)))) {
              (**(code **)(*piVar3 + 0xc))(iVar1);
            }
          }
          else if ((float10)(float)param_1[8] <= fVar5) {
            (**(code **)(*piVar3 + 0x1c))();
          }
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 != DAT_00913e74 + DAT_00913e7c);
  }
  FUN_004d9600(param_2);
  return;
}

