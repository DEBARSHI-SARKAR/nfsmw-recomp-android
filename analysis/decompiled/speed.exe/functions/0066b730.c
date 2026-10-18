/* speed.exe 0066b730 FUN_0066b730; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 00723d80 FUN_00723d80
 */

void __thiscall FUN_0066b730(int param_1,undefined4 *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  psVar1 = (short *)FUN_00723c90(*(undefined4 *)(param_1 + 0x2c));
  if (psVar1 != (short *)0x0) {
    iVar2 = FUN_00723d80((int)*psVar1);
    if (((iVar2 != 0) && (iVar3 = psVar1[1] * 0x40 + *(int *)(iVar2 + 0x20), iVar3 != 0)) &&
       (iVar2 = *(int *)(iVar2 + 0x18) + *(short *)(iVar3 + 0x3e) * 0x48, iVar2 != 0)) {
      iVar3 = 0;
      piVar4 = (int *)(iVar2 + 0x18);
      do {
        if (*piVar4 != 0) {
          *param_2 = *(undefined4 *)(iVar2 + 0x18 + iVar3 * 4);
          return;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 4);
    }
  }
  *param_2 = 0xc7395a8;
  return;
}

