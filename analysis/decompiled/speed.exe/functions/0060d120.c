/* speed.exe 0060d120 FUN_0060d120; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0060d120(code *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = (int)param_1;
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + -4);
  if ((*(char *)(iVar2 + 7) != '\0') && ((int *)(iVar2 + 0x10) != (int *)0x0)) {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 2) {
      param_1 = *(code **)(iVar2 + 0x14);
      goto LAB_0060d164;
    }
    if (iVar3 == 7) {
      param_1 = (code *)(*(int *)(iVar2 + 0x14) + 0x10);
      goto LAB_0060d164;
    }
  }
  param_1 = (code *)0x0;
LAB_0060d164:
  fVar6 = (float10)(*param_1)();
  puVar4 = *(undefined4 **)(iVar5 + 8);
  puVar4[1] = (float)fVar6;
  *puVar4 = 3;
  piVar1 = (int *)(iVar5 + 8);
  *piVar1 = *piVar1 + 8;
  return 1;
}

