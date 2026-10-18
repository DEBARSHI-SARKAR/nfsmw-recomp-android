/* speed.exe 0084f2c0 FUN_0084f2c0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084ed00 FUN_0084ed00
 * calls 0084f0e0 FUN_0084f0e0
 * calls 0084ed50 FUN_0084ed50
 * calls 0084edc0 FUN_0084edc0
 */

void FUN_0084f2c0(void)

{
  int in_EAX;
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((*(int *)(in_EAX + 0x94) == 1) || (*(int *)(in_EAX + 0x94) == 2)) {
    FUN_0084edc0();
  }
  FUN_0084f0e0();
  if (*(int *)(in_EAX + 0x94) == 3) {
    if ((*(int *)(in_EAX + 0xbc) == *(int *)(in_EAX + 0xc0)) &&
       (DVar1 = GetTickCount(), *(int *)(in_EAX + 200) + 5000U < DVar1)) {
      FUN_0084ed50(0x13);
    }
    if ((((*(int *)(in_EAX + 0x94) == 3) && (*(int *)(in_EAX + 0xbc) != *(int *)(in_EAX + 0xc0))) &&
        ((pDVar3 = (DWORD *)(*(int *)(in_EAX + 0xc4) + *(int *)(in_EAX + 0xc0)), *pDVar3 == 0 ||
         (DVar1 = GetTickCount(), 0xf9 < DVar1 - *pDVar3)))) && (iVar2 = FUN_0084ed00(), -1 < iVar2)
       ) {
      DVar1 = GetTickCount();
      *pDVar3 = DVar1;
    }
  }
  if ((*(int *)(in_EAX + 0x214) == 0) && (*(int *)(in_EAX + 0x218) != 0)) {
    *(int *)(in_EAX + 0x214) = *(int *)(in_EAX + 0x214) + 1;
    if (*(code **)(in_EAX + 0x21c) != (code *)0x0) {
      (**(code **)(in_EAX + 0x21c))();
    }
    *(int *)(in_EAX + 0x214) = *(int *)(in_EAX + 0x214) + -1;
    *(undefined4 *)(in_EAX + 0x218) = 0;
  }
  return;
}

