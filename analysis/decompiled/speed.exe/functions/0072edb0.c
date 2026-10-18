/* speed.exe 0072edb0 FUN_0072edb0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00466340 FUN_00466340
 * calls 0072e7c0 FUN_0072e7c0
 * calls 00463ca0 FUN_00463ca0
 * calls 0072d5a0 FUN_0072d5a0
 * calls 0045f140 FUN_0045f140
 */

void FUN_0072edb0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088065b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_007c4b80();
  iVar4 = FUN_007c4b80();
  iVar3 = (iVar4 >> 0x16) * 0x10000 + (iVar3 >> 0x16 & 0xffffU);
  piVar5 = DAT_009aa480;
  do {
    if ((int **)piVar5 == &DAT_009aa480) {
LAB_0072ee16:
      iVar4 = FUN_0045f140(DAT_009a3a00);
      piVar5 = DAT_009aa484;
      if (iVar4 != 0) {
        iVar4 = *DAT_009aa484;
        piVar1 = (int *)DAT_009aa484[1];
        *piVar1 = iVar4;
        *(int **)(iVar4 + 4) = piVar1;
        FUN_0072d5a0();
        FUN_00463ca0(DAT_009a3a00,piVar5);
      }
      iVar4 = FUN_00466340(DAT_009a3a00);
      local_4 = 0;
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_0072e7c0(param_1,iVar3);
      }
LAB_0072ee98:
      piVar2 = DAT_009aa480;
      piVar1 = DAT_009aa480 + 1;
      DAT_009aa480 = piVar5;
      *piVar1 = (int)piVar5;
      piVar5[1] = (int)&DAT_009aa480;
      *piVar5 = (int)piVar2;
      ExceptionList = local_c;
      return;
    }
    if (piVar5[4] == iVar3) {
      if ((int **)piVar5 != &DAT_009aa480) {
        piVar1 = (int *)piVar5[1];
        piVar5[5] = DAT_008f830c;
        iVar3 = *piVar5;
        *piVar1 = iVar3;
        *(int **)(iVar3 + 4) = piVar1;
        goto LAB_0072ee98;
      }
      goto LAB_0072ee16;
    }
    piVar5 = (int *)*piVar5;
  } while( true );
}

