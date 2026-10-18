/* speed.exe 0085c510 FUN_0085c510; analysis pseudocode, not buildable source.
 * calls 0085c0f0 FUN_0085c0f0
 * calls 00864c30 FUN_00864c30
 * calls 00864af0 FUN_00864af0
 * calls 00864bb0 FUN_00864bb0
 * calls 00864730 FUN_00864730
 * calls 0085c070 FUN_0085c070
 */

bool FUN_0085c510(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 *in_EAX;
  int iVar4;
  undefined4 uVar5;
  int *unaff_EBX;
  
  iVar2 = unaff_EBX[0x24];
  piVar1 = unaff_EBX + 0x24;
  bVar3 = 0;
  if ((*(byte *)(in_EAX + 0xb) & 2) == 0) {
    if ((iVar2 == 0) || (iVar2 == 5)) {
      return false;
    }
    FUN_0085c0f0();
  }
  if (*piVar1 == 0) {
    iVar4 = *unaff_EBX;
    if (in_EAX[in_EAX[0x35] * 0x2c + 0x66] == iVar4) {
      iVar4 = unaff_EBX[1];
    }
    iVar4 = FUN_00864af0(in_EAX[0x1b],0xffffffff,unaff_EBX + 0x1a,iVar4,(short)unaff_EBX[0x25],6000)
    ;
    if (iVar4 < 0) {
      *piVar1 = 5;
    }
    else {
      unaff_EBX[0x2a] = iVar4;
      *piVar1 = 1;
    }
  }
  if ((*piVar1 == 1) || (*piVar1 == 3)) {
    bVar3 = FUN_00864bb0(in_EAX[0x1b],unaff_EBX[0x2a]);
  }
  if (*piVar1 == 1) {
    if ((bVar3 & 1) == 0) {
      if ((char)bVar3 < '\0') {
        if (*(short *)((int)unaff_EBX + 0x96) == 1) {
          FUN_0085c070();
          *piVar1 = 5;
          unaff_EBX[0x2a] = -1;
        }
        else {
          *piVar1 = (-(uint)(in_EAX[0x5d] != 0) & 0xfffffffd) + 5;
        }
      }
    }
    else {
      if (*(short *)((int)unaff_EBX + 0x96) == 1) {
        FUN_00864730(in_EAX[0xe],0,0xffffffff);
        in_EAX[0x5c] = 1;
        *(undefined2 *)((int)unaff_EBX + 0x96) = 0;
      }
      uVar5 = FUN_00864c30(in_EAX[0x1b],0x736f636b,0);
      in_EAX[0x62] = uVar5;
      *piVar1 = 3;
    }
  }
  if ((*piVar1 == 3) && ((char)bVar3 < '\0')) {
    *piVar1 = 5;
    unaff_EBX[0x2a] = -1;
  }
  if (iVar2 != *piVar1) {
    in_EAX[0x5f] = 1;
    (*(code *)*in_EAX)();
    in_EAX[0x5f] = 0;
  }
  return *piVar1 != 5;
}

