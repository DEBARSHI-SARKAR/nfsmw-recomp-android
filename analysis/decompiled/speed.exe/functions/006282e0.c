/* speed.exe 006282e0 FUN_006282e0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000027 MultiByteToWideChar
 * calls 0057e8a0 FUN_0057e8a0
 * calls 00460c50 FUN_00460c50
 */

void FUN_006282e0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  WCHAR *pWVar4;
  undefined4 local_458 [4];
  CHAR aCStack_448 [287];
  char acStack_329 [265];
  WCHAR aWStack_220 [270];
  
  DAT_009203bc = 0;
  if (DAT_0091f150 != 0) {
    piVar1 = *(int **)(DAT_0091f150 + 0x218);
    puVar3 = local_458;
    for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_458[0] = 0x13c;
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,local_458,4,2);
    if (iVar2 == 0) {
      pWVar4 = aWStack_220;
      for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
        pWVar4[0] = L'\0';
        pWVar4[1] = L'\0';
        pWVar4 = pWVar4 + 2;
      }
      MultiByteToWideChar(0,0,aCStack_448,-1,aWStack_220,0x104);
      FUN_0057e8a0(acStack_329 + 1,0x104,aWStack_220);
      iVar2 = FUN_00460c50(acStack_329 + 1);
      if (acStack_329[iVar2] == '0') {
        DAT_009203bc = 1;
      }
    }
  }
  return;
}

