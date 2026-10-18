/* speed.exe 0064cae0 FUN_0064cae0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 */

float10 __fastcall FUN_0064cae0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar3 = 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (1 < *(int *)(param_1 + 4)) {
      iVar2 = 0x10;
      do {
        iVar1 = *(int *)(param_1 + 0xc) + iVar2;
        fVar4 = (float10)FUN_0045f340(iVar1,iVar1 + -0x10);
        iVar3 = iVar3 + 1;
        *(float *)(param_1 + 0x20) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x20));
        iVar2 = iVar2 + 0x10;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (float10)*(float *)(param_1 + 0x20);
}

