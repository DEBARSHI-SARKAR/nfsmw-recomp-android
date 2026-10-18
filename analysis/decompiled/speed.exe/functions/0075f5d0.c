/* speed.exe 0075f5d0 FUN_0075f5d0; analysis pseudocode, not buildable source.
 * calls 00737000 FUN_00737000
 * calls 0045f490 FUN_0045f490
 * calls 0074da80 FUN_0074da80
 * calls 0074d780 FUN_0074d780
 * calls 00652ad0 _malloc
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 0045a760 FUN_0045a760
 * calls 0074df10 FUN_0074df10
 * calls 00449320 FUN_00449320
 * calls 00460bf0 FUN_00460bf0
 * calls 00502820 FUN_00502820
 * calls 00470730 FUN_00470730
 * calls 004549b0 FUN_004549b0
 * calls 00751860 FUN_00751860
 * calls 0064a020 FUN_0064a020
 * calls 00503400 FUN_00503400
 * calls 004fb840 FUN_004fb840
 * calls 00444fe0 FUN_00444fe0
 * calls 004fb7a0 FUN_004fb7a0
 * calls 00755e60 FUN_00755e60
 * calls 005016d0 FUN_005016d0
 * calls 00460c20 FUN_00460c20
 * calls 00755800 FUN_00755800
 * calls 00456050 FUN_00456050
 * calls 0074d130 FUN_0074d130
 * calls 00737d70 FUN_00737d70
 * calls 0075f0a0 FUN_0075f0a0
 * calls 0045da70 FUN_0045da70
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0075f5d0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  float10 fVar12;
  float *local_220;
  uint *local_21c;
  uint *local_218;
  int local_214;
  float local_210 [26];
  float local_1a8;
  float local_1a0 [6];
  float local_188;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 *local_164;
  float local_160;
  float local_15c;
  float local_158;
  uint local_150 [77];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00881712;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_164 = param_1;
  FUN_00449320(0x3ccccccd);
  puVar4 = param_1 + 0x41;
  *puVar4 = puVar4;
  param_1[0x42] = puVar4;
  local_14 = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x57,8,0x1c,(_func_void_void_ptr *)&LAB_0073eec0,FUN_0074c6f0);
  local_14._0_1_ = 1;
  puVar4 = param_1 + 0x8f;
  iVar7 = 0x49;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = param_1 + 0x16a;
  iVar7 = 0x49;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = param_1 + 0x245;
  iVar7 = 0x30;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = param_1 + 0x2d5;
  iVar7 = 2;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = param_1 + 0x2db;
  iVar7 = 2;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4 = puVar4 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  _eh_vector_constructor_iterator_
            (param_1 + 0x2e1,4,0x17c,(_func_void_void_ptr *)&LAB_007374b0,
             (_func_void_void_ptr *)&LAB_007374c0);
  param_1[0x588] = 0;
  param_1[0x589] = 0;
  puVar4 = param_1 + 0x590;
  for (iVar7 = 0x58; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x5e8] = 0;
  local_14._0_1_ = 2;
  param_1[0x5ea] = 0x40400000;
  FUN_00470730(0xeec2271a,0,0);
  *(undefined1 *)(param_1 + 0x5f0) = 0;
  param_1[0x5f1] = 0;
  param_1[0x5f2] = 0;
  *(undefined1 *)(param_1 + 0x5f3) = 0;
  *(undefined1 *)((int)param_1 + 0x17cd) = 0;
  *(undefined1 *)((int)param_1 + 0x17ce) = 0;
  *(undefined1 *)((int)param_1 + 0x17cf) = 0;
  local_14 = CONCAT31(local_14._1_3_,3);
  uVar2 = FUN_004549b0(*param_2 * 0xd0 + DAT_009b09d8 + 0x10);
  uVar2 = FUN_00456050(0xa5b543b7,uVar2);
  FUN_0045a760(uVar2);
  iVar7 = param_1[0x5ed];
  *(bool *)(param_1 + 0x5f4) = *(char *)(iVar7 + 0x11c) < '\0';
  local_220 = local_1a0;
  *param_1 = 0;
  uVar3 = 0;
  do {
    pfVar5 = (float *)(iVar7 + 0x10 + uVar3);
    local_210[0] = *pfVar5;
    local_210[1] = pfVar5[1];
    local_210[2] = pfVar5[2];
    local_210[3] = pfVar5[3];
    *(float *)((int)local_210 + uVar3 + 0x20) = local_210[0];
    *(float *)((int)local_210 + uVar3 + 0x24) = local_210[1];
    *(float *)((int)local_210 + uVar3 + 0x28) = local_210[2];
    *local_220 = local_210[3];
    uVar3 = uVar3 + 0x10;
    local_220 = local_220 + 1;
  } while (uVar3 < 0x40);
  param_1[0x48] = DAT_00903318;
  param_1[0x49] = DAT_00903318;
  param_1[0x4a] = DAT_0090331c;
  param_1[0x4b] = DAT_0090331c;
  puVar4 = param_1 + 0x50;
  iVar7 = 4;
  do {
    puVar4[-4] = 0x3f800000;
    *puVar4 = 0x3f800000;
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (DAT_00925e90 == 3) {
    param_1[0x58a] = param_2[4];
    iVar7 = param_2[5];
  }
  else {
    param_1[0x58a] = param_2[2];
    iVar7 = param_2[3];
  }
  param_1[0x58b] = iVar7;
  param_1[0x58c] = param_2[0xe];
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  param_1[0x21] = param_2;
  fVar12 = (float10)FUN_0045da70(0x3f800000);
  param_1[0x43] = (float)fVar12;
  param_1[0x5e9] = 0;
  iVar10 = *(int *)param_1[0x21] * 0xd0 + DAT_009b09d8;
  iVar7 = *(int *)(iVar10 + 0x94);
  puVar4 = param_1 + 0x2e1;
  for (iVar8 = 0x17c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x22] = iVar10;
  param_1[0x3e] = 0;
  FUN_00751860(param_1 + 0x4a8,param_1[0x21],0);
  param_1[0x8f] = param_1[0x558];
  param_1[0x92] = param_1[0x559];
  param_1[0x95] = param_1[0x55a];
  param_1[0x9e] = param_1[0x55d];
  param_1[0xa1] = param_1[0x55b];
  param_1[0xa4] = param_1[0x55c];
  param_1[0xa7] = param_1[0x55e];
  param_1[0xaa] = param_1[0x55f];
  param_1[0xad] = param_1[0x560];
  param_1[0xb3] = param_1[0x56c];
  param_1[0x98] = 0xa7366ae6;
  param_1[0x9b] = 0x3c84d757;
  param_1[0xb0] = 0x5799e60b;
  if ((iVar7 == 2) && (iVar7 = FUN_00460bf0("TRAFFIC_TIRE"), iVar7 != param_1[0xb4])) {
    param_1[0xb4] = iVar7;
    param_1[0xb5] = 0xffffffff;
  }
  uVar2 = FUN_00460bf0("WINDOW_FRONT");
  param_1[0xb6] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_REAR");
  param_1[0xb9] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_LEFT_FRONT");
  param_1[0xbc] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_LEFT_REAR");
  param_1[0xbf] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_RIGHT_FRONT");
  param_1[0xc2] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_RIGHT_REAR");
  param_1[0xc5] = uVar2;
  uVar2 = FUN_00460bf0("REAR_DEFROSTER");
  param_1[200] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_FRONT");
  param_1[0xcb] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_REAR");
  param_1[0xce] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_LEFT_FRONT");
  param_1[0xd1] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_LEFT_REAR");
  param_1[0xd4] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_RIGHT_FRONT");
  param_1[0xd7] = uVar2;
  uVar2 = FUN_00460bf0("WINDOW_RIGHT_REAR");
  param_1[0xda] = uVar2;
  uVar2 = FUN_00460bf0("REAR_DEFROSTER");
  param_1[0xdd] = uVar2;
  param_1[0xfe] = param_1[0x561];
  param_1[0x101] = param_1[0x562];
  param_1[0x104] = param_1[0x563];
  param_1[0x107] = param_1[0x564];
  param_1[0x10a] = param_1[0x565];
  param_1[0x10d] = param_1[0x566];
  param_1[0x110] = param_1[0x567];
  param_1[0x113] = param_1[0x568];
  param_1[0x116] = param_1[0x569];
  param_1[0x119] = param_1[0x56a];
  param_1[0xe0] = 0xa7e6ea53;
  param_1[0xe3] = 0xa532fc46;
  param_1[0x2d5] = 0x17f9f794;
  if (param_1[0x2d6] != -0x7a163862) {
    param_1[0x2d6] = 0x85e9c79e;
    param_1[0x2d7] = 0xffffffff;
  }
  param_1[0x2d8] = param_1[0x55a];
  param_1[0x2db] = 0x17f9f794;
  if (param_1[0x2dc] != 0x17f9f794) {
    param_1[0x2dc] = 0x17f9f794;
    param_1[0x2dd] = 0xffffffff;
  }
  param_1[0x2de] = param_1[0x55a];
  FUN_00755e60(param_1[0x21]);
  iVar7 = param_1[0x55d];
  cVar1 = FUN_0064a020();
  if (cVar1 != '\0') {
    iVar8 = FUN_00460c20(&PTR_LAB_008b46d8,iVar7);
    iVar10 = FUN_00503400(iVar8,0,0);
    if (iVar10 != 0) {
      iVar7 = iVar8;
    }
  }
  iVar8 = FUN_00503400(iVar7,0,0);
  if (iVar8 != 0) {
    *(undefined1 *)(iVar8 + 0x54) = 0;
  }
  if (iVar7 != param_1[0x9f]) {
    param_1[0x9f] = iVar7;
    param_1[0xa0] = 0xffffffff;
  }
  FUN_00737d70();
  FUN_0074da80(param_2);
  if (param_1[0xb1] != -0x5dbb2b77) {
    param_1[0xb1] = 0xa244d489;
    param_1[0xb2] = 0xffffffff;
  }
  FUN_00755800();
  uVar2 = FUN_00460bf0("CARSHADOW");
  uVar2 = FUN_00503400(uVar2,1,0);
  param_1[0x34] = uVar2;
  uVar2 = FUN_00503400(0xbadb4475,0,0);
  param_1[0x35] = uVar2;
  if (param_1[0x34] != 0) {
    *(undefined1 *)(param_1[0x34] + 0x54) = 0;
    *(undefined1 *)(param_1[0x34] + 0x51) = 2;
  }
  if (param_1[0x35] != 0) {
    *(undefined1 *)(param_1[0x35] + 0x54) = 0;
    *(undefined1 *)(param_1[0x35] + 0x51) = 3;
  }
  if ((param_1[param_1[0x58a] + 0x2e1] & 0xfffffffc) != 0) {
    puVar4 = (undefined4 *)FUN_004fb7a0();
    uVar2 = _DAT_00890968;
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = *puVar4;
    }
    param_1[0x30] = uVar2;
    uVar2 = _DAT_00890968;
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = puVar4[1];
    }
    param_1[0x31] = uVar2;
    uVar2 = _DAT_00890968;
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = puVar4[2];
    }
    param_1[0x32] = uVar2;
  }
  FUN_0074df10();
  FUN_00737000(0,local_210 + 8);
  FUN_00737000(1,local_210 + 0xc);
  FUN_00737000(2,local_210 + 0x10);
  FUN_00737000(3,local_210 + 0x14);
  local_210[4] = (local_210[0x14] + local_210[8]) * _DAT_008933d4;
  local_210[5] = (local_210[0x15] + local_210[9]) * _DAT_008933d4;
  local_210[6] = (local_210[0x16] + local_210[10]) * _DAT_008933d4;
  local_188 = local_210[0xe] + local_210[0x12];
  local_210[0] = (local_210[0x10] + local_210[0xc]) * _DAT_008933d4;
  local_210[1] = (local_210[0x11] + local_210[0xd]) * _DAT_008933d4;
  local_210[2] = local_188 * _DAT_008933d4;
  FUN_00737000(4,local_210 + 8);
  FUN_00737000(5,local_210 + 0xc);
  FUN_00737000(6,local_210 + 0x10);
  FUN_00737000(7,local_210 + 0x14);
  FUN_00737000(8,local_210 + 8);
  FUN_00737000(9,local_210 + 0x10);
  local_188 = local_210[2] + local_210[6];
  local_210[4] = (local_210[0] + local_210[4]) * _DAT_008933d4;
  local_210[5] = (local_210[1] + local_210[5]) * _DAT_008933d4;
  local_210[6] = local_188 * _DAT_008933d4;
  FUN_00737000(10,local_210 + 4);
  local_180 = local_210[8] - local_210[0xc];
  local_17c = local_210[9] - local_210[0xd];
  local_178 = local_210[10] - local_210[0xe];
  local_160 = local_210[0xc] - local_210[0x10];
  local_15c = local_210[0xd] - local_210[0x11];
  local_188 = local_210[0xe] - local_210[0x12];
  local_158 = local_188;
  FUN_0045f7c0(local_210 + 0x18,&local_180,&local_160);
  FUN_0045f490(local_210 + 0x18,local_210 + 0x18);
  if (local_1a0[0] < local_1a0[1]) {
    local_1a0[0] = local_1a0[1];
  }
  if (local_1a0[0] < local_1a0[2]) {
    local_1a0[0] = local_1a0[2];
  }
  if (local_1a0[0] < local_1a0[3]) {
    local_1a0[0] = local_1a0[3];
  }
  local_220 = (float *)param_1[0x58a];
  local_210[0x18] = local_210[0x18] * local_1a0[0];
  local_210[0x19] = local_210[0x19] * local_1a0[0];
  local_1a8 = local_1a8 * local_1a0[0];
  if ((int)local_220 < param_1[0x58b] + 1) {
    do {
      local_218 = local_150;
      puVar11 = local_150;
      for (iVar7 = 0x4c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_21c = param_1 + (int)local_220 + 0x2e0;
      local_214 = 0;
      do {
        uVar3 = local_21c[1] & 0xfffffffc;
        uVar9 = 0;
        if ((int)param_1[0x58a] < (int)local_220) {
          uVar9 = *local_21c & 0xfffffffc;
        }
        if (uVar3 == 0) {
          *local_218 = 0;
        }
        else {
          switch(local_214) {
          case 0:
          case 0x17:
          case 0x21:
          case 0x2a:
          case 0x2c:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
            if (((local_220 == (float *)param_1[0x58a]) || (uVar9 == 0)) ||
               (((int)param_1[0x58a] < (int)local_220 &&
                (*(int *)(uVar9 + 8) != *(int *)(uVar3 + 8))))) {
              *local_218 = uVar3;
            }
            break;
          default:
            *local_218 = 0;
          }
        }
        local_214 = local_214 + 1;
        local_21c = local_21c + 5;
        local_218 = local_218 + 1;
      } while (local_214 < 0x4c);
      FUN_004fb840(local_150,0x4c);
      local_220 = (float *)((int)local_220 + 1);
    } while ((int)local_220 < param_1[0x58b] + 1);
  }
  uVar2 = 0;
  if (param_2[0x5e] != 0) {
    uVar2 = FUN_0074d130();
  }
  uVar2 = FUN_00502820(uVar2);
  param_1[0x36] = uVar2;
  uVar2 = FUN_00460bf0("CARBONFIBER");
  uVar2 = FUN_00502820(uVar2);
  param_1[0x37] = uVar2;
  uVar2 = 0x471a1dca;
  if (param_2[0x95] != 0) {
    uVar2 = FUN_0074d130();
  }
  uVar2 = FUN_00502820(uVar2);
  param_1[0x38] = uVar2;
  if ((((param_2[0x54] == 0) || (*(byte *)(param_2[0x54] + 5) >> 5 == 0)) || (param_2[0x60] == 0))
     || (iVar7 = FUN_0074d130(), iVar7 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00502820(iVar7);
  }
  param_1[0x39] = uVar2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_0074d780();
  uVar3 = param_1[param_1[0x58a] + 0x430];
  if ((param_1[param_1[0x58a] + 0x42b] & 0xfffffffc) == 0) {
    local_220 = (float *)0x0;
  }
  else {
    local_220 = (float *)FUN_005016d0(0xa4ccd4ac);
  }
  if ((uVar3 & 0xfffffffc) == 0) {
    pfVar5 = (float *)0x0;
  }
  else {
    pfVar5 = (float *)FUN_005016d0(0xb2e13a0d);
  }
  uVar2 = _DAT_00890968;
  if (local_220 != (float *)0x0) {
    if (pfVar5 == (float *)0x0) {
      pfVar5 = local_220;
    }
    uVar2 = *(undefined4 *)((int)local_220 + 0x44);
  }
  param_1[0x54] = uVar2;
  uVar2 = _DAT_00890968;
  if (pfVar5 != (float *)0x0) {
    uVar2 = *(undefined4 *)((int)pfVar5 + 0x44);
  }
  param_1[0x55] = uVar2;
  if (*(int *)param_1[0x21] == 0x33) {
    DAT_009ae8a0 = 0;
    DAT_009ae8a4 = 0;
    DAT_009ae8a8 = 0;
    DAT_009ae8ac = 0;
    iVar7 = 0;
    do {
      *(undefined4 *)((int)&DAT_009b2af0 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2af4 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2af8 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2afc + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b00 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b04 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2b08 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b0c + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b10 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b14 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b18 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2b1c + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b20 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b24 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b28 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2b2c + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2800 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2804 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2808 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b280c + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2810 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2814 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b2818 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b281c + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2820 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2824 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2828 + iVar7) = 0x3f800000;
      *(undefined4 *)((int)&DAT_009b282c + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2830 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2834 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b2838 + iVar7) = 0;
      *(undefined4 *)((int)&DAT_009b283c + iVar7) = 0x3f800000;
      iVar7 = iVar7 + 0x40;
    } while (iVar7 < 0x100);
    if ((param_1[param_1[0x58a] + 0x354] & 0xfffffffc) != 0) {
      local_210[4] = -5.0557184e+34;
      local_210[5] = -1.38850305e-30;
      local_210[6] = 8.7979596e+19;
      local_210[7] = -3.2588216e+10;
      local_210[0] = 1.430607e+15;
      local_210[1] = -2.298707e-29;
      local_210[2] = 1.8904832e-35;
      local_210[3] = 9.804116e+35;
      local_21c = (uint *)0x0;
      iVar7 = 0;
      do {
        iVar8 = FUN_005016d0(*(undefined4 *)((int)local_210 + iVar7 + 0x10));
        iVar10 = FUN_005016d0(*(undefined4 *)((int)local_210 + iVar7));
        if ((iVar8 != 0) && (iVar10 != 0)) {
          FUN_00444fe0((int)&DAT_009b2af0 + (int)local_21c,iVar8 + 0x10);
          FUN_00444fe0((int)&DAT_009b2800 + (int)local_21c,iVar10 + 0x10);
        }
        iVar7 = iVar7 + 4;
        local_21c = (uint *)((int)local_21c + 0x40);
      } while (iVar7 < 0x10);
    }
  }
  iVar7 = *(int *)param_1[0x21];
  if ((((iVar7 == 3) || (iVar7 == 0x39)) ||
      ((iVar7 == 0x3d ||
       ((((iVar7 == 0x47 || (iVar7 == 0x49)) || (iVar7 == 0x48)) ||
        ((iVar7 == 0x4b || (iVar7 == 0x4c)))))))) || (iVar7 == 0x4d)) {
    pvVar6 = _malloc(0xd0);
    local_14._0_1_ = 4;
    if (pvVar6 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0075f0a0(param_1);
    }
    local_14 = CONCAT31(local_14._1_3_,3);
    param_1[0x10] = uVar2;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xb7]) {
    param_1[0xb7] = iVar7;
    param_1[0xb8] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xba]) {
    param_1[0xba] = iVar7;
    param_1[0xbb] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xbd]) {
    param_1[0xbd] = iVar7;
    param_1[0xbe] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xc0]) {
    param_1[0xc0] = iVar7;
    param_1[0xc1] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xc3]) {
    param_1[0xc3] = iVar7;
    param_1[0xc4] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("WINDOW_FRONT");
  if (iVar7 != param_1[0xc6]) {
    param_1[0xc6] = iVar7;
    param_1[199] = 0xffffffff;
  }
  iVar7 = FUN_00460bf0("REAR_DEFROSTER");
  if (iVar7 != param_1[0xc9]) {
    param_1[0xc9] = iVar7;
    param_1[0xca] = 0xffffffff;
  }
  ExceptionList = local_1c;
  return param_1;
}

