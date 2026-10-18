/* speed.exe 0084a7c0 FUN_0084a7c0; analysis pseudocode, not buildable source.
 */

void FUN_0084a7c0(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *in_EAX;
  uint *puVar3;
  undefined4 *unaff_ESI;
  
  if ((DAT_009c3704 != (uint *)0x0) && (puVar3 = DAT_009c3704, DAT_009c3704[2] != 0)) {
    while (*puVar3 !=
           (puVar3[1] &
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(in_EAX + 1),*(undefined1 *)((int)in_EAX + 5)),
                             *(undefined1 *)((int)in_EAX + 6)),*(undefined1 *)((int)in_EAX + 7)))) {
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 3;
      if (*puVar1 == 0) {
        return;
      }
    }
    *unaff_ESI = *in_EAX;
    unaff_ESI[1] = in_EAX[1];
    unaff_ESI[2] = in_EAX[2];
    unaff_ESI[3] = in_EAX[3];
    uVar2 = puVar3[2];
    *(char *)((int)unaff_ESI + 7) = (char)uVar2;
    *(char *)((int)unaff_ESI + 6) = (char)(uVar2 >> 8);
    *(char *)((int)unaff_ESI + 5) = (char)(uVar2 >> 0x10);
    *(char *)(unaff_ESI + 1) = (char)(uVar2 >> 0x18);
  }
  return;
}

