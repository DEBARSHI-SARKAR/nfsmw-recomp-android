/* speed.exe 005e48f0 FUN_005e48f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005e48f0(int param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 700) != 0) {
    do {
      psVar1 = *(short **)(*(int *)(param_1 + 0x2c4) + uVar2 * 4);
      if ((*psVar1 == 0xc) &&
         (((param_2 == -1 || (param_2 == psVar1[2])) || (param_2 == psVar1[3])))) {
        *(byte *)(psVar1 + 1) = *(byte *)(psVar1 + 1) | 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 700));
  }
  return;
}

