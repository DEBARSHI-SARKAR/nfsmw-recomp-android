/* speed.exe 00544370 FUN_00544370; analysis pseudocode, not buildable source.
 * calls 00543cc0 FUN_00543cc0
 * calls 00543be0 FUN_00543be0
 * calls 005268b0 FUN_005268b0
 * calls 00543eb0 FUN_00543eb0
 * calls 0056da30 FUN_0056da30
 * calls 0056db10 FUN_0056db10
 * calls 005188f0 FUN_005188f0
 * calls 00544210 FUN_00544210
 * calls 00516be0 FUN_00516be0
 */

void __thiscall FUN_00544370(int *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    cVar1 = FUN_0056db10();
    if (cVar1 == '\0') {
      param_1[0x19] = 2;
    }
  }
  else {
    param_1[0x19] = param_2;
  }
  switch(param_1[0x19]) {
  case 1:
    FUN_00543cc0(0x7209349f,0x5000000);
    return;
  case 2:
    break;
  case 3:
    (**(code **)(*param_1 + 0x14))();
    return;
  case 4:
    FUN_00544210();
    return;
  default:
    return;
  case 6:
    FUN_00543eb0();
    return;
  case 8:
    FUN_0056da30(param_1 + 0x10,1);
    FUN_005188f0(param_1 + 0x10);
    return;
  case 9:
    FUN_00543be0(0xd9783c57,0x3000000);
    return;
  case 10:
    FUN_00516be0(0x1c8ace,param_1[4],0xfffffffc,0xff);
    FUN_00543be0(0xb01be5dd,0x8000000);
    return;
  case 0xb:
    FUN_00543be0(0xb380362f,0x9000000);
    return;
  case 0xc:
    FUN_005268b0();
    return;
  }
  if ((DAT_0091cbac & 0x80000) != 0) {
    FUN_00543cc0(0xbadd522c,0x1000000);
    return;
  }
  if ((DAT_0091cbac & 0x10000) == 0) {
    FUN_00543cc0((-(uint)((DAT_0091cbac & 0x8000) != 0) & 0x39ad3047) + 0xbe97590f,0x1000000);
    return;
  }
  FUN_00543cc0(0x93c25b3d,0x1000000);
  return;
}

