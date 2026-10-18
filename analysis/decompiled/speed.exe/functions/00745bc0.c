/* speed.exe 00745bc0 FUN_00745bc0; analysis pseudocode, not buildable source.
 * calls 00737cf0 FUN_00737cf0
 */

void __thiscall FUN_00745bc0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = 0;
  piVar5 = (int *)(param_3 + 0x54);
  piVar4 = (int *)(param_1 + 0x3bc);
  while (*piVar4 == *piVar5) {
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    if (2 < iVar1) {
      return;
    }
  }
  uVar6 = 0;
  do {
    bVar3 = (byte)uVar6 & 0x1f;
    uVar2 = *(uint *)(param_3 + 0x54 + (uVar6 >> 5) * 4) >> bVar3;
    if (((byte)uVar2 & 1) != ((byte)(*(uint *)(param_1 + 0x3bc + (uVar6 >> 5) * 4) >> bVar3) & 1)) {
      if ((uVar2 & 1) == 0) {
        if (*(int *)(param_1 + 0x44) != 0) {
          uVar7 = 0;
          goto LAB_00745c40;
        }
      }
      else if ((-1 < (int)uVar6) && (*(int *)(param_1 + 0x44) != 0)) {
        uVar7 = 1;
LAB_00745c40:
        FUN_00737cf0(uVar6,uVar7);
      }
    }
    uVar6 = uVar6 + 1;
    if (0x4b < uVar6) {
      *(int *)(param_1 + 0x3bc) = *(int *)(param_3 + 0x54);
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_3 + 0x58);
      *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_3 + 0x5c);
      return;
    }
  } while( true );
}

