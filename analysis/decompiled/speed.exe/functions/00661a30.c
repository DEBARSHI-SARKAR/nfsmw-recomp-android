/* speed.exe 00661a30 FUN_00661a30; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00660ee0 FUN_00660ee0
 */

void __fastcall FUN_00661a30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  uVar5 = FUN_00465a70(iVar2 - iVar1,*(byte *)(param_1 + 4) & 0xf | 0x1040);
  *param_1 = uVar5;
  FUN_00660ee0(uVar5,*(undefined4 *)(param_1[5] + 0xc),param_1[1],iVar2 - iVar1,&LAB_0065e5d0,
               param_1,0);
  piVar4 = DAT_00925b20;
  iVar1 = *DAT_00925b20;
  piVar3 = (int *)DAT_00925b20[1];
  *piVar3 = iVar1;
  *(int **)(iVar1 + 4) = piVar3;
  iVar1 = (int)DAT_00925b1c;
  DAT_00925b1c = piVar4;
  *(int **)(iVar1 + 4) = piVar4;
  piVar4[1] = (int)&DAT_00925b1c;
  *piVar4 = iVar1;
  return;
}

