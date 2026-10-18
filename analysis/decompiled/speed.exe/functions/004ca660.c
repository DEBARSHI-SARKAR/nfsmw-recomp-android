/* speed.exe 004ca660 FUN_004ca660; analysis pseudocode, not buildable source.
 * calls 0065f740 FUN_0065f740
 * calls 006269b0 FUN_006269b0
 * calls 00464080 FUN_00464080
 * calls 00660ee0 FUN_00660ee0
 * calls 00454810 FUN_00454810
 * calls 00460ed0 FUN_00460ed0
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

void __thiscall FUN_004ca660(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00454810(0x4166fa80,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0x10);
  }
  puVar2 = *(undefined1 **)(iVar1 + 0xc);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00890978;
  }
  iVar1 = param_1 + 0x10;
  FUN_00460ed0(iVar1,(&PTR_s_sound__008ee5c0)[param_3],puVar2);
  iVar3 = FUN_0065f740(iVar1);
  iVar4 = FUN_00454810(0x4166fa80,param_2);
  if (iVar4 == 0) {
    FUN_006269b0(0x10);
  }
  iVar4 = FUN_00464080(DAT_008ee558);
  if (iVar4 < iVar3) {
    FUN_00464a50(DAT_008ee558,0,0x7fffffff);
    uVar5 = FUN_00465a70(iVar3,0x1000);
  }
  else {
    uVar5 = FUN_00465a70(iVar3,(DAT_008ee558 & 0xf) + 0x1000);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xe0) + param_2 * 4) = uVar5;
  FUN_00660ee0(*(undefined4 *)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec) * 4),iVar1,0,
               iVar3,&LAB_004af320,*(int *)(param_1 + 0xec),0);
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  return;
}

