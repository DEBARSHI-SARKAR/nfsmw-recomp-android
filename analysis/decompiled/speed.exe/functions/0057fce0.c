/* speed.exe 0057fce0 FUN_0057fce0; analysis pseudocode, not buildable source.
 * calls 00722840 FUN_00722840
 */

void __fastcall FUN_0057fce0(char *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = *param_1;
  iVar4 = FUN_00722840(DAT_00904fb8);
  if (iVar4 != 0) {
    if ((*(uint *)(iVar4 + 0x94) & 1) != 0) {
      iVar4 = 1;
      goto LAB_0057fd1e;
    }
    if ((*(uint *)(iVar4 + 0x94) & 4) != 0) {
      iVar4 = 0;
      goto LAB_0057fd1e;
    }
  }
  iVar4 = -1;
LAB_0057fd1e:
  iVar3 = *(int *)(param_1 + 0x10);
  *(int *)(iVar3 + 0x9ae4) = *(int *)(iVar3 + 0x9ae4) + 1;
  if (iVar4 != -1) {
    piVar1 = (int *)(iVar3 + 0x9af0 + iVar4 * 8);
    *piVar1 = *piVar1 + 1;
  }
  if (cVar2 == '\x02') {
    *(int *)(iVar3 + 0x9b00) = *(int *)(iVar3 + 0x9b00) + 1;
  }
  return;
}

