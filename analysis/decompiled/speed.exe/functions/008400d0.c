/* speed.exe 008400d0 FUN_008400d0; analysis pseudocode, not buildable source.
 */

bool FUN_008400d0(int param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_EDI;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  if (*(int *)(unaff_EDI + 0x1d20) != 0) {
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0x7fffffff;
    if (0 < *(int *)(unaff_EDI + 0x1d20)) {
      piVar6 = (int *)(unaff_EDI + 0x1a2c);
      do {
        iVar1 = *piVar6;
        if ((iVar1 < iVar5) && (iVar1 != -1)) {
          iVar3 = iVar4;
          iVar5 = iVar1;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 6;
      } while (iVar4 < *(int *)(unaff_EDI + 0x1d20));
    }
    iVar5 = unaff_EDI + iVar3 * 0x18;
    if ((*(int *)(unaff_EDI + 0x1a24 + iVar3 * 0x18) == param_1) || (param_1 == 0x44515545)) {
      puVar2 = (undefined4 *)(iVar5 + 0x1a20);
      *in_EAX = *puVar2;
      in_EAX[1] = *(undefined4 *)(iVar5 + 0x1a24);
      in_EAX[2] = *(undefined4 *)(iVar5 + 0x1a28);
      in_EAX[3] = *(undefined4 *)(iVar5 + 0x1a2c);
      in_EAX[4] = *(undefined4 *)(iVar5 + 0x1a30);
      in_EAX[5] = *(undefined4 *)(iVar5 + 0x1a34);
      if (iVar3 < *(int *)(unaff_EDI + 0x1d20) + -1) {
        do {
          *puVar2 = puVar2[6];
          puVar2[1] = puVar2[7];
          puVar2[2] = puVar2[8];
          puVar2[3] = puVar2[9];
          puVar2[4] = puVar2[10];
          puVar2[5] = puVar2[0xb];
          iVar3 = iVar3 + 1;
          puVar2 = puVar2 + 6;
        } while (iVar3 < *(int *)(unaff_EDI + 0x1d20) + -1);
      }
      puVar2 = (undefined4 *)(unaff_EDI + 0x1a20 + iVar3 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(int *)(unaff_EDI + 0x1d20) = *(int *)(unaff_EDI + 0x1d20) + -1;
    }
  }
  return *(int *)(unaff_EDI + 0x1d20) != 0;
}

