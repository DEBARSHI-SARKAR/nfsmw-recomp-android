/* speed.exe 004b3f90 FUN_004b3f90; analysis pseudocode, not buildable source.
 * calls 004b0120 FUN_004b0120
 * calls 0045d9a0 FUN_0045d9a0
 * calls 004b0040 FUN_004b0040
 * calls 004b0010 FUN_004b0010
 * calls 0045d9e0 FUN_0045d9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b3f90(int param_1,undefined4 param_2)

{
  float10 fVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
  FUN_004b0120(param_2);
  if (*(char *)(param_1 + 0x14e) != '\0') {
    iVar2 = FUN_0045d9a0(100,&DAT_00911fe0);
    fVar3 = (float10)FUN_0045d9e0(0x42c80000,&DAT_00911fe0);
    fVar1 = (float10)_DAT_00896454;
    FUN_004b0010();
    FUN_004b0040(0,(float)(fVar3 + fVar1),iVar2 + 0x19,5);
    FUN_004b0040((float)(fVar3 + fVar1),0,iVar2 + 0x19,5);
    *(undefined1 *)(param_1 + 0x14e) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0x7fff;
  }
  return;
}

