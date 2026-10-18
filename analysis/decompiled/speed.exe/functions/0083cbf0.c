/* speed.exe 0083cbf0 FUN_0083cbf0; analysis pseudocode, not buildable source.
 * calls 00862110 Netbios
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0083cbf0(PUCHAR param_1)

{
  _NCB *p_Var1;
  UCHAR UVar2;
  int iVar3;
  undefined4 *puVar4;
  _NCB local_44;
  undefined4 local_4;
  
  puVar4 = (undefined4 *)&stack0xffffffb8;
  local_4 = DAT_00906980;
  p_Var1 = &local_44;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = (_NCB *)((int)p_Var1 + 4);
  }
  local_44.ncb_command = '2';
  local_44.ncb_lana_num = 0;
  while (UVar2 = Netbios(&local_44), UVar2 != '\0') {
    local_44.ncb_lana_num = local_44.ncb_lana_num + 1;
    if (9 < local_44.ncb_lana_num) {
      return 0xffffffff;
    }
  }
  if (9 < local_44.ncb_lana_num) {
    return 0xffffffff;
  }
  for (iVar3 = 0x10; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
  }
  local_44.ncb_callname[0] = s_0123456789abcdef__008c67a8[0x10];
  local_44.ncb_callname[1] = s_0123456789abcdef__008c67a8[0x11];
  local_44.ncb_callname[2] = s_0123456789abcdef__008c67a8[0x12];
  local_44.ncb_callname[3] = s_0123456789abcdef__008c67a8[0x13];
  local_44.ncb_callname[0xc] = s_0123456789abcdef__008c67a8[0x1c];
  local_44.ncb_callname[0xd] = s_0123456789abcdef__008c67a8[0x1d];
  local_44.ncb_callname[0xe] = s_0123456789abcdef__008c67a8[0x1e];
  local_44.ncb_callname[0xf] = s_0123456789abcdef__008c67a8[0x1f];
  local_44.ncb_callname[4] = s_0123456789abcdef__008c67a8[0x14];
  local_44.ncb_callname[5] = s_0123456789abcdef__008c67a8[0x15];
  local_44.ncb_callname[6] = s_0123456789abcdef__008c67a8[0x16];
  local_44.ncb_callname[7] = s_0123456789abcdef__008c67a8[0x17];
  local_44.ncb_callname[8] = s_0123456789abcdef__008c67a8[0x18];
  local_44.ncb_callname[9] = s_0123456789abcdef__008c67a8[0x19];
  local_44.ncb_callname[10] = s_0123456789abcdef__008c67a8[0x1a];
  local_44.ncb_callname[0xb] = s_0123456789abcdef__008c67a8[0x1b];
  local_44.ncb_command = '3';
  local_44.ncb_name[0] = s_0123456789abcdef__008c67a8[0x20];
  local_44.ncb_buffer = param_1;
  local_44.ncb_length = 0xf0;
  UVar2 = Netbios(&local_44);
  if (UVar2 != '\0') {
    return 0xffffffff;
  }
  return 0;
}

