/* speed.exe 004cebb5 FUN_004cebb5; analysis pseudocode, not buildable source.
 * calls 004cc5d0 FUN_004cc5d0
 * calls 004c07c0 FUN_004c07c0
 * calls 004cd140 FUN_004cd140
 * calls 004c03c0 FUN_004c03c0
 * calls 005d0370 FUN_005d0370
 */

int FUN_004cebb5(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                undefined4 param_6,void *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  
  puVar3 = (undefined4 *)FUN_004c03c0();
  piVar5 = (int *)(&DAT_009123e4)[in_stack_0000002c * 0x5a];
  param_5 = puVar3;
  if (piVar5 != (int *)((&DAT_009123e4)[in_stack_0000002c * 0x5a] +
                       (&DAT_009123ec)[in_stack_0000002c * 0x5a] * 8)) {
    do {
      param_2 = *piVar5;
      param_3 = piVar5[1];
      if ((int)(uint)*(byte *)(*(int *)(param_2 + 4) + 0xe) <= in_stack_00000030) {
        iVar4 = FUN_004c07c0(puVar3,puVar3[1],&param_2);
        FUN_004cd140(1);
        puVar3[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        unaff_EDI = unaff_EDI + 1;
        puVar3 = param_5;
      }
    } while ((in_stack_00000034 != unaff_EDI) &&
            (piVar5 = piVar5 + 2,
            piVar5 != (int *)((&DAT_009123e4)[in_stack_0000002c * 0x5a] +
                             (&DAT_009123ec)[in_stack_0000002c * 0x5a] * 8)));
  }
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    FUN_004cc5d0(puVar1[2],puVar1[3]);
  }
  puVar1 = (undefined4 *)*puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  while (puVar1 != puVar3) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_005d0370(puVar1,0x10,0);
    puVar1 = puVar2;
  }
  FUN_005d0370(puVar3,0x10,0);
  ExceptionList = param_7;
  return unaff_EDI;
}

