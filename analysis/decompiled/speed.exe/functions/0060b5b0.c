/* speed.exe 0060b5b0 FUN_0060b5b0; analysis pseudocode, not buildable source.
 * calls 0060b480 FUN_0060b480
 */

undefined4 FUN_0060b5b0(undefined4 param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((((*(byte *)(in_EAX + 8) & 1) != 0) || (*(int *)(in_EAX + 0x14) < 1)) &&
     ((*(byte *)(in_EAX + -0x10) & 1) == 0)) {
    if ((*(uint *)(in_EAX + -0x10) & 1) == 0) {
      if ((*(uint *)(in_EAX + -0x10) & 2) != 0) {
        *(undefined4 *)(in_EAX + -0xc) = **(undefined4 **)(in_EAX + -8);
      }
      iVar2 = (*(int *)(in_EAX + -0xc) -
               *(int *)(*(int *)(*(int *)(*(int *)(in_EAX + -0x18) + -4) + 0xc) + 0xc) >> 2) + -1;
    }
    else {
      iVar2 = -1;
    }
    uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(in_EAX + -0x18) + -4) + 0xc) + 0xc) +
                     iVar2 * 4);
    uVar4 = uVar1 & 0x3f;
    if ((uVar4 == 0x19) || (uVar4 == 0x1a)) {
      uVar3 = FUN_0060b480(uVar1 >> 0x18,param_1);
      return uVar3;
    }
  }
  return 0;
}

