/* speed.exe 007268c0 FUN_007268c0; analysis pseudocode, not buildable source.
 * calls 004fca70 thunk_FUN_006cf2b0
 * calls 007267c0 FUN_007267c0
 * calls 004fcb60 FUN_004fcb60
 */

void FUN_007268c0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = DAT_009aa480;
  if ((int **)DAT_009aa480 != &DAT_009aa480) {
    do {
      piVar1 = (int *)*piVar5;
      iVar4 = FUN_004fcb60(piVar5 + 0xc,piVar5 + 0x10);
      if ((10 < iVar4) && (iVar4 = thunk_FUN_006cf2b0(piVar5 + 0xc,piVar5 + 0x10,0), iVar4 != 0)) {
        if (300 < DAT_008f830c - piVar5[5]) {
          piVar2 = (int *)piVar5[1];
          piVar5[5] = DAT_008f830c;
          iVar4 = *piVar5;
          *piVar2 = iVar4;
          *(int **)(iVar4 + 4) = piVar2;
          piVar3 = DAT_009aa480;
          piVar2 = DAT_009aa480 + 1;
          DAT_009aa480 = piVar5;
          *piVar2 = (int)piVar5;
          piVar5[1] = (int)&DAT_009aa480;
          *piVar5 = (int)piVar3;
        }
        FUN_007267c0(param_1,piVar5);
      }
      piVar5 = piVar1;
    } while ((int **)piVar1 != &DAT_009aa480);
  }
  return;
}

