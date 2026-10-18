/* speed.exe 005961d0 FUN_005961d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00524920 FUN_00524920
 * calls 005251e0 FUN_005251e0
 * calls 00573140 FUN_00573140
 * calls 00594f00 FUN_00594f00
 */

void __thiscall FUN_005961d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872bd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00573140("LINE%d_GROUP",*(undefined4 *)(param_1 + 0xc),0x1744b3,1);
  FUN_00524920(*(undefined4 *)(param_1 + 0x14),uVar2);
  pvVar3 = _malloc(0x54);
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar2 = FUN_00573140(&DAT_008a0dac,"COLUMN1_DATA",*(undefined4 *)(param_1 + 0xc));
    uVar2 = FUN_005251e0(*(undefined4 *)(param_1 + 0x14),uVar2);
    uVar4 = FUN_00573140(&DAT_008a0dac,"COLUMN3_DATA",*(undefined4 *)(param_1 + 0xc),param_2,param_3
                        );
    uVar4 = FUN_005251e0(*(undefined4 *)(param_1 + 0x14),uVar4);
    iVar5 = FUN_00594f00(uVar2,uVar4,param_2,param_3);
    if (iVar5 != 0) {
      piVar6 = (int *)(iVar5 + 4);
      goto LAB_0059628a;
    }
  }
  piVar6 = (int *)0x0;
LAB_0059628a:
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = piVar6;
  *(int **)(param_1 + 8) = piVar6;
  *piVar6 = param_1 + 4;
  piVar6[1] = (int)puVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  ExceptionList = local_c;
  return;
}

