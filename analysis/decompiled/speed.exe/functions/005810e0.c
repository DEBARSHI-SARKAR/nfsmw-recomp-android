/* speed.exe 005810e0 FUN_005810e0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005810e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (uint *)(param_1 + 0x34);
  iVar2 = 0x28;
  do {
    if ((((puVar1[-0xd] != 0xffffffff) && ((puVar1[-10] & 0xf0000) != 0)) &&
        ((puVar1[-10] >> 1 & 1) != 0)) && ((puVar1[-10] & 0x40) == 0)) {
      iVar3 = iVar3 + 1;
    }
    if (((puVar1[-8] != 0xffffffff) && ((puVar1[-5] & 0xf0000) != 0)) &&
       (((puVar1[-5] >> 1 & 1) != 0 && ((puVar1[-5] & 0x40) == 0)))) {
      iVar3 = iVar3 + 1;
    }
    if (((puVar1[-3] != 0xffffffff) && ((*puVar1 & 0xf0000) != 0)) &&
       (((*puVar1 >> 1 & 1) != 0 && ((*puVar1 & 0x40) == 0)))) {
      iVar3 = iVar3 + 1;
    }
    if ((((puVar1[2] != 0xffffffff) && ((puVar1[5] & 0xf0000) != 0)) && ((puVar1[5] >> 1 & 1) != 0))
       && ((puVar1[5] & 0x40) == 0)) {
      iVar3 = iVar3 + 1;
    }
    if (((puVar1[7] != 0xffffffff) && ((puVar1[10] & 0xf0000) != 0)) &&
       (((puVar1[10] >> 1 & 1) != 0 && ((puVar1[10] & 0x40) == 0)))) {
      iVar3 = iVar3 + 1;
    }
    puVar1 = puVar1 + 0x19;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

