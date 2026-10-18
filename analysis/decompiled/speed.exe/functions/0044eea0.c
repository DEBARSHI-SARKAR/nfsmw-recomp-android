/* speed.exe 0044eea0 FUN_0044eea0; analysis pseudocode, not buildable source.
 * calls 0044bed0 FUN_0044bed0
 * calls 0044c1f0 FUN_0044c1f0
 * calls 0044d510 FUN_0044d510
 * calls 00466340 FUN_00466340
 */

void __thiscall FUN_0044eea0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_0044d510();
    }
    FUN_0044c1f0(param_2);
    DAT_0090da94 = DAT_0090da94 + 1;
    if (DAT_0090da98 < DAT_0090da94) {
      DAT_0090da98 = DAT_0090da94;
    }
    iVar2 = FUN_00466340(DAT_0090db60);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0044bed0();
    }
    piVar3[2] = param_2;
    piVar3[3] = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    *puVar1 = piVar3;
    *(int **)(param_1 + 0x48) = piVar3;
    piVar3[1] = (int)puVar1;
    *piVar3 = param_1 + 0x44;
  }
  return;
}

