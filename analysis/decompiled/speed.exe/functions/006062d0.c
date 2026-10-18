/* speed.exe 006062d0 FUN_006062d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006062d0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  if ((in_EAX[2] & 1U) == 0) {
    if ((in_EAX[2] & 2U) != 0) {
      in_EAX[3] = *(int *)in_EAX[4];
    }
    iVar1 = *(int *)(*(int *)(*in_EAX + -4) + 0xc);
    iVar2 = (in_EAX[3] - *(int *)(iVar1 + 0xc) >> 2) + -1;
    if (-1 < iVar2) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 != 0) {
        return *(undefined4 *)(iVar1 + iVar2 * 4);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

