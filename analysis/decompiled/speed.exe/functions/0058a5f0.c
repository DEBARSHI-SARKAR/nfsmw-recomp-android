/* speed.exe 0058a5f0 FUN_0058a5f0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 */

byte FUN_0058a5f0(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  
  bVar3 = DAT_00926124;
  piVar6 = (int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x414);
  iVar4 = 0;
  piVar5 = piVar6;
  do {
    if (*piVar5 == param_2) {
      piVar6 = piVar6 + iVar4 * 5;
      goto LAB_0058a626;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 5;
  } while (iVar4 < 200);
  piVar6 = (int *)0x0;
LAB_0058a626:
  FUN_0051e1a0(piVar6[1],0,0);
  bVar1 = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  bVar2 = *(byte *)(local_c + 0x59);
  FUN_0045a430();
  return 1U - (bVar2 < bVar1) | bVar3;
}

