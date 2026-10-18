/* speed.exe 005ec040 FUN_005ec040; analysis pseudocode, not buildable source.
 * calls 006ff320 FUN_006ff320
 * calls 00425200 FUN_00425200
 * calls 0040e040 FUN_0040e040
 * calls 00542670 FUN_00542670
 */

uint FUN_005ec040(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_4;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),DAT_00992244);
  if (((((DAT_00992244 == '\0') && (DAT_00925e90 == 6)) && (uVar1 = DAT_009885c8, DAT_009885c8 == 0)
       ) && ((uVar1 = 0, DAT_0091cf41 == '\0' && (uVar1 = DAT_0091e000, DAT_0091e000 != 0)))) &&
     (*(int *)(DAT_0091e000 + 0x1960) == 0)) {
    uVar1 = FUN_00542670(0,1,1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_006ff320(0xcc);
      if ((char)uVar1 == '\0') {
        piVar2 = (int *)FUN_00425200(1);
        uVar1 = 0;
        if (piVar2 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar2 + 4))();
          uVar1 = 0;
          if (iVar3 != 0) {
            piVar2 = (int *)(**(code **)(*piVar2 + 0x20))();
            uVar1 = 0;
            if (piVar2 != (int *)0x0) {
              uVar1 = (**(code **)(*piVar2 + 0x18))();
              if ((char)uVar1 != '\0') {
                uVar1 = FUN_0040e040(&piStack_4);
                if (((char)uVar1 != '\0') && (piStack_4 != (int *)0x0)) {
                  uVar1 = (**(code **)(*piStack_4 + 0xbc))();
                  if ((char)uVar1 == '\0') {
                    uVar1 = (**(code **)(*piStack_4 + 0x20))();
                    if ((char)uVar1 == '\0') {
                      uVar1 = (**(code **)(*piStack_4 + 0x5c))();
                      if ((char)uVar1 == '\0') {
                        piVar2 = (int *)(**(code **)(*piStack_4 + 0xac))();
                        uVar1 = 0;
                        if (piVar2 != (int *)0x0) {
                          iVar3 = (**(code **)(*piVar2 + 0xa0))();
                          return (uint)(iVar3 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return uVar1 & 0xffffff00;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

