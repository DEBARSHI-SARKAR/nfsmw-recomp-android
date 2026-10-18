/* speed.exe 00627c40 FUN_00627c40; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 004647e0 FUN_004647e0
 * calls 00460ca0 FUN_00460ca0
 * calls 00460c50 FUN_00460c50
 * calls 00460f80 FUN_00460f80
 */

void FUN_00627c40(undefined4 param_1,size_t param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_009203bc != '\0') {
    pcVar1 = _malloc(param_2);
    FUN_00460ca0(pcVar1,param_1,param_2);
    iVar2 = FUN_00460c50(pcVar1);
    for (pcVar3 = pcVar1 + iVar2 + -1; ((pcVar3 != pcVar1 && ('/' < *pcVar3)) && (*pcVar3 < ':'));
        pcVar3 = pcVar3 + -1) {
    }
    if (('/' < pcVar3[1]) && (pcVar3[1] < ':')) {
      iVar2 = FUN_00460f80(pcVar3 + 1);
      pcVar3[1] = '\0';
      FUN_004647e0(param_1,param_2,&DAT_008a0dac,pcVar1,iVar2 + 1);
    }
  }
  return;
}

