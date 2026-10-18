/* speed.exe 0081fed2 FUN_0081fed2; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081fed2(void)

{
  if (DAT_009c1fd8 == '\x01') {
    DAT_009c1fdc = 0;
  }
  else {
    if (DAT_009c1fd8 == '\x02') {
      DAT_009c1fdc = 1;
      DAT_009c1fc4 = 0x42b40000;
      DAT_009c1fc8 = 0x43870000;
      goto LAB_0081ff81;
    }
    if (DAT_009c1fd8 == '\x04') {
      DAT_009c1fdc = 2;
      DAT_009c1fc4 = 0x42340000;
      DAT_009c1fc8 = 0x43070000;
      DAT_009c1fcc = 0x43610000;
      _DAT_009c1fd0 = 0x439d8000;
      goto LAB_0081ff81;
    }
    if (DAT_009c1fd8 != '\x06') goto LAB_0081ff81;
    DAT_009c1fdc = 3;
    DAT_009c1fc8 = 0x42340000;
    DAT_009c1fcc = 0x43070000;
    _DAT_009c1fd0 = 0x43610000;
    _DAT_009c1fd4 = 0x439d8000;
  }
  DAT_009c1fc4 = 0;
LAB_0081ff81:
  if (DAT_009c205f == '\x02') {
    _DAT_009c220c = 0xc000;
    _DAT_009c220e = 0x4000;
  }
  else {
    _DAT_009c220c = 0xe000;
    _DAT_009c220e = 0x2000;
  }
  _DAT_009c2218 = DAT_009c20ac;
  _DAT_009c221a = DAT_009c20a8;
  _DAT_009c221c = DAT_009c20aa;
  _DAT_009c2224 = 0xe000;
  _DAT_009c2226 = 0x2000;
  _DAT_009c2228 = 0xa000;
  _DAT_009c222a = 0x6000;
  _DAT_009c2230 = 0xe000;
  _DAT_009c2232 = 0;
  _DAT_009c2234 = 0x2000;
  _DAT_009c2236 = 0xa000;
  _DAT_009c2238 = 0x6000;
  _DAT_009c223c = 0xe000;
  _DAT_009c223e = 0;
  _DAT_009c2240 = 0x2000;
  _DAT_009c2242 = 0xa000;
  _DAT_009c2244 = 0x6000;
  _DAT_009c2246 = 0;
  return;
}

