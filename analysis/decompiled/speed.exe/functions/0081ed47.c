/* speed.exe 0081ed47 FUN_0081ed47; analysis pseudocode, not buildable source.
 * calls 0082261b FUN_0082261b
 * calls 00822c37 FUN_00822c37
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081ed47(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00822c37(DAT_009c2058);
  if (DAT_009c2188 != '\0') {
    puVar4 = &DAT_009c20ec;
    puVar5 = &DAT_009c203c;
    for (iVar3 = 0x27; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  if (DAT_009c205f < (byte)DAT_009c2024) {
    DAT_009c205f = (byte)DAT_009c2024;
  }
  if (DAT_009c2024._1_1_ < DAT_009c205f) {
    DAT_009c205f = DAT_009c2024._1_1_;
  }
  if (DAT_009c2046 < (ushort)DAT_009c2020) {
    DAT_009c2046 = (ushort)DAT_009c2020;
  }
  if (DAT_009c2020._2_2_ < DAT_009c2046) {
    DAT_009c2046 = DAT_009c2020._2_2_;
  }
  if (DAT_009c2024._2_1_ < DAT_009c204a) {
    DAT_009c204a = DAT_009c2024._2_1_;
  }
  if (0x20 < DAT_009c205e) {
    DAT_009c205e = 0x20;
  }
  if ((DAT_009c2056 != '\0') && (DAT_009c202b == '\0')) {
    DAT_009c2056 = '\0';
  }
  if (DAT_009c205f == 4) {
    if (DAT_009c2060 == '\0') goto LAB_0081ee51;
    DAT_009c2060 = '\0';
  }
  if (DAT_009c205f == 2) {
    if (DAT_009c2060 == '\0') goto LAB_0081ee51;
    DAT_009c2060 = '\0';
  }
  if ((DAT_009c205f == 6) && (DAT_009c2060 == '\0')) {
    DAT_009c205f = 5;
    DAT_009c2060 = '\x01';
  }
LAB_0081ee51:
  DAT_009c218c = (ushort)DAT_009c204a;
  if (0x100 < DAT_009c218c) {
    DAT_009c218c = 0x100;
  }
  uVar2 = (uint)DAT_009c2064;
  do {
    iVar3 = 0;
    while( true ) {
      if ((int)uVar2 <= iVar3) {
        fVar1 = _DAT_009c2050;
        if (_DAT_009c2050 == _DAT_008c5c18) {
          fVar1 = _DAT_00894b64;
        }
        _DAT_009c1b54 = _DAT_00890bf8;
        if ((_DAT_00890bf8 <= fVar1) && (_DAT_009c1b54 = fVar1, _DAT_00890fc8 < fVar1)) {
          _DAT_009c1b54 = _DAT_00890fc8;
        }
        _DAT_009c200c = _DAT_00890bf8 / _DAT_009c1b54;
        if ((DAT_009c2055 != '\0') && (uVar2 = FUN_0082261b(), (uVar2 & 2) != 0)) {
          DAT_009c218f = DAT_009c218f | 2;
          return 0;
        }
        DAT_009c218f = DAT_009c218f & 0xfd;
        DAT_009c2055 = 0;
        return 0;
      }
      if ((&DAT_009c2066)[iVar3] == 0) break;
      iVar3 = iVar3 + 1;
    }
    DAT_009c2064 = DAT_009c2064 - 1;
    for (; uVar2 = (uint)DAT_009c2064, iVar3 < (int)uVar2; iVar3 = iVar3 + 1) {
      (&DAT_009c2066)[iVar3] = (&DAT_009c2068)[iVar3];
    }
  } while( true );
}

