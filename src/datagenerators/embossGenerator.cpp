#ifndef COMMON
#include "common.h" 
#endif

vector<Tool> emboss() {
  vector<Tool> emboss;
  Input ins;
  Input outs;
  // Now we add all the tools to the list

  Tool aaindexextract;
  aaindexextract.name = "aaindexextract";
  aaindexextract.id = "aaindexextract";
  aaindexextract.operations = {"aaindexextract"};
  aaindexextract.type = "tool";
  aaindexextract.inputs = {};
  aaindexextract.inTypes = {};

  sort (aaindexextract.inTypes.begin(),aaindexextract.inTypes.end());
  aaindexextract.output = "http://edamontology.org/data_1501";
  emboss.push_back(aaindexextract);

  Tool abiview;
  abiview.name = "abiview";
  abiview.id = "abiview";
  abiview.operations = {"abiview"};
  abiview.type = "tool";
  abiview.inputs = {};
  abiview.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  abiview.inputs.push_back(ins);
  abiview.inTypes.push_back("http://edamontology.org/data_2887");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2168";
  abiview.inputs.push_back(ins);
  abiview.inTypes.push_back("http://edamontology.org/data_2168");
  sort (abiview.inTypes.begin(),abiview.inTypes.end());
  abiview.output = "http://edamontology.org/data_0924";
  emboss.push_back(abiview);

  Tool acdc;
  acdc.name = "acdc";
  acdc.id = "acdc";
  acdc.operations = {"acdc"};
  acdc.type = "tool";
  acdc.inputs = {};
  acdc.inTypes = {};

  sort (acdc.inTypes.begin(),acdc.inTypes.end());
  emboss.push_back(acdc);

  Tool acdpretty;
  acdpretty.name = "acdpretty";
  acdpretty.id = "acdpretty";
  acdpretty.operations = {"acdpretty"};
  acdpretty.type = "tool";
  acdpretty.inputs = {};
  acdpretty.inTypes = {};

  sort (acdpretty.inTypes.begin(),acdpretty.inTypes.end());
  emboss.push_back(acdpretty);

  Tool acdtable;
  acdtable.name = "acdtable";
  acdtable.id = "acdtable";
  acdtable.operations = {"acdtable"};
  acdtable.type = "tool";
  acdtable.inputs = {};
  acdtable.inTypes = {};

  sort (acdtable.inTypes.begin(),acdtable.inTypes.end());
  emboss.push_back(acdtable);

  Tool acdtrace;
  acdtrace.name = "acdtrace";
  acdtrace.id = "acdtrace";
  acdtrace.operations = {"acdtrace"};
  acdtrace.type = "tool";
  acdtrace.inputs = {};
  acdtrace.inTypes = {};

  sort (acdtrace.inTypes.begin(),acdtrace.inTypes.end());
  emboss.push_back(acdtrace);

  Tool acdvalid;
  acdvalid.name = "acdvalid";
  acdvalid.id = "acdvalid";
  acdvalid.operations = {"acdvalid"};
  acdvalid.type = "tool";
  acdvalid.inputs = {};
  acdvalid.inTypes = {};

  sort (acdvalid.inTypes.begin(),acdvalid.inTypes.end());
  emboss.push_back(acdvalid);

  Tool aligncopy;
  aligncopy.name = "aligncopy";
  aligncopy.id = "aligncopy";
  aligncopy.operations = {"aligncopy"};
  aligncopy.type = "tool";
  aligncopy.inputs = {};
  aligncopy.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0863";
  aligncopy.inputs.push_back(ins);
  aligncopy.inTypes.push_back("http://edamontology.org/data_0863");
  sort (aligncopy.inTypes.begin(),aligncopy.inTypes.end());
  aligncopy.output = "http://edamontology.org/data_0863";
  emboss.push_back(aligncopy);

  Tool aligncopypair;
  aligncopypair.name = "aligncopypair";
  aligncopypair.id = "aligncopypair";
  aligncopypair.operations = {"aligncopypair"};
  aligncopypair.type = "tool";
  aligncopypair.inputs = {};
  aligncopypair.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  aligncopypair.inputs.push_back(ins);
  aligncopypair.inTypes.push_back("http://edamontology.org/data_1381");
  sort (aligncopypair.inTypes.begin(),aligncopypair.inTypes.end());
  aligncopypair.output = "http://edamontology.org/data_0863";
  emboss.push_back(aligncopypair);

  Tool antigenic;
  antigenic.name = "antigenic";
  antigenic.id = "antigenic";
  antigenic.operations = {"antigenic"};
  antigenic.type = "tool";
  antigenic.inputs = {};
  antigenic.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1534";
  antigenic.inputs.push_back(ins);
  antigenic.inTypes.push_back("http://edamontology.org/data_1534");
  sort (antigenic.inTypes.begin(),antigenic.inTypes.end());
  antigenic.output = "http://edamontology.org/data_2886";
  emboss.push_back(antigenic);

  Tool assemblyget;
  assemblyget.name = "assemblyget";
  assemblyget.id = "assemblyget";
  assemblyget.operations = {"assemblyget"};
  assemblyget.type = "tool";
  assemblyget.inputs = {};
  assemblyget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  assemblyget.inputs.push_back(ins);
  assemblyget.inTypes.push_back("http://edamontology.org/data_0849");
  sort (assemblyget.inTypes.begin(),assemblyget.inTypes.end());
  assemblyget.output = "http://edamontology.org/data_0925";
  emboss.push_back(assemblyget);

  Tool backtranambig;
  backtranambig.name = "backtranambig";
  backtranambig.id = "backtranambig";
  backtranambig.operations = {"backtranambig"};
  backtranambig.type = "tool";
  backtranambig.inputs = {};
  backtranambig.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  backtranambig.inputs.push_back(ins);
  backtranambig.inTypes.push_back("http://edamontology.org/data_2887");
  sort (backtranambig.inTypes.begin(),backtranambig.inTypes.end());
  backtranambig.output = "http://edamontology.org/data_2886";
  emboss.push_back(backtranambig);

  Tool backtranambig_ebi;
  backtranambig_ebi.name = "backtranambig-ebi";
  backtranambig_ebi.id = "backtranambig-ebi";
  backtranambig_ebi.operations = {"backtranambig-ebi"};
  backtranambig_ebi.type = "tool";
  backtranambig_ebi.inputs = {};
  backtranambig_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2977";
  backtranambig_ebi.inputs.push_back(ins);
  backtranambig_ebi.inTypes.push_back("http://edamontology.org/data_2977");
  sort (backtranambig_ebi.inTypes.begin(),backtranambig_ebi.inTypes.end());
  backtranambig_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(backtranambig_ebi);

  Tool backtranseq;
  backtranseq.name = "backtranseq";
  backtranseq.id = "backtranseq";
  backtranseq.operations = {"backtranseq"};
  backtranseq.type = "tool";
  backtranseq.inputs = {};
  backtranseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  backtranseq.inputs.push_back(ins);
  backtranseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (backtranseq.inTypes.begin(),backtranseq.inTypes.end());
  backtranseq.output = "http://edamontology.org/data_2886";
  backtranseq.output = "http://edamontology.org/data_1597";
  emboss.push_back(backtranseq);

  Tool backtranseq_ebi;
  backtranseq_ebi.name = "backtranseq-ebi";
  backtranseq_ebi.id = "backtranseq-ebi";
  backtranseq_ebi.operations = {"backtranseq-ebi"};
  backtranseq_ebi.type = "tool";
  backtranseq_ebi.inputs = {};
  backtranseq_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2977";
  backtranseq_ebi.inputs.push_back(ins);
  backtranseq_ebi.inTypes.push_back("http://edamontology.org/data_2977");
  sort (backtranseq_ebi.inTypes.begin(),backtranseq_ebi.inTypes.end());
  backtranseq_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(backtranseq_ebi);

  Tool banana;
  banana.name = "banana";
  banana.id = "banana";
  banana.operations = {"banana"};
  banana.type = "tool";
  banana.inputs = {};
  banana.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0912";
  banana.inputs.push_back(ins);
  banana.inTypes.push_back("http://edamontology.org/data_0912");
  sort (banana.inTypes.begin(),banana.inTypes.end());
  banana.output = "http://edamontology.org/data_0849";
  banana.output = "http://edamontology.org/data_1590";
  emboss.push_back(banana);

  Tool biosed;
  biosed.name = "biosed";
  biosed.id = "biosed";
  biosed.operations = {"biosed"};
  biosed.type = "tool";
  biosed.inputs = {};
  biosed.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  biosed.inputs.push_back(ins);
  biosed.inTypes.push_back("http://edamontology.org/data_0849");
  sort (biosed.inTypes.begin(),biosed.inTypes.end());
  biosed.output = "http://edamontology.org/data_0849";
  emboss.push_back(biosed);

  Tool btwisted;
  btwisted.name = "btwisted";
  btwisted.id = "btwisted";
  btwisted.operations = {"btwisted"};
  btwisted.type = "tool";
  btwisted.inputs = {};
  btwisted.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0912";
  btwisted.inputs.push_back(ins);
  btwisted.inTypes.push_back("http://edamontology.org/data_0912");
  sort (btwisted.inTypes.begin(),btwisted.inTypes.end());
  btwisted.output = "http://edamontology.org/data_0849";
  btwisted.output = "http://edamontology.org/data_1589";
  btwisted.output = "http://edamontology.org/data_1588";
  emboss.push_back(btwisted);

  Tool cachedas;
  cachedas.name = "cachedas";
  cachedas.id = "cachedas";
  cachedas.operations = {"cachedas"};
  cachedas.type = "tool";
  cachedas.inputs = {};
  cachedas.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  cachedas.inputs.push_back(ins);
  cachedas.inTypes.push_back("http://edamontology.org/data_2048");
  sort (cachedas.inTypes.begin(),cachedas.inTypes.end());
  emboss.push_back(cachedas);

  Tool cachedbfetch;
  cachedbfetch.name = "cachedbfetch";
  cachedbfetch.id = "cachedbfetch";
  cachedbfetch.operations = {"cachedbfetch"};
  cachedbfetch.type = "tool";
  cachedbfetch.inputs = {};
  cachedbfetch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  cachedbfetch.inputs.push_back(ins);
  cachedbfetch.inTypes.push_back("http://edamontology.org/data_2048");
  sort (cachedbfetch.inTypes.begin(),cachedbfetch.inTypes.end());
  emboss.push_back(cachedbfetch);

  Tool cacheebeyesearch;
  cacheebeyesearch.name = "cacheebeyesearch";
  cacheebeyesearch.id = "cacheebeyesearch";
  cacheebeyesearch.operations = {"cacheebeyesearch"};
  cacheebeyesearch.type = "tool";
  cacheebeyesearch.inputs = {};
  cacheebeyesearch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  cacheebeyesearch.inputs.push_back(ins);
  cacheebeyesearch.inTypes.push_back("http://edamontology.org/data_2048");
  sort (cacheebeyesearch.inTypes.begin(),cacheebeyesearch.inTypes.end());
  emboss.push_back(cacheebeyesearch);

  Tool cacheensembl;
  cacheensembl.name = "cacheensembl";
  cacheensembl.id = "cacheensembl";
  cacheensembl.operations = {"cacheensembl"};
  cacheensembl.type = "tool";
  cacheensembl.inputs = {};
  cacheensembl.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  cacheensembl.inputs.push_back(ins);
  cacheensembl.inTypes.push_back("http://edamontology.org/data_2048");
  sort (cacheensembl.inTypes.begin(),cacheensembl.inTypes.end());
  emboss.push_back(cacheensembl);

  Tool cai;
  cai.name = "cai";
  cai.id = "cai";
  cai.operations = {"cai"};
  cai.type = "tool";
  cai.inputs = {};
  cai.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2865";
  cai.inputs.push_back(ins);
  cai.inTypes.push_back("http://edamontology.org/data_2865");
  sort (cai.inTypes.begin(),cai.inTypes.end());
  cai.output = "http://edamontology.org/data_2887";
  cai.output = "http://edamontology.org/data_1597";
  emboss.push_back(cai);

  Tool chaos;
  chaos.name = "chaos";
  chaos.id = "chaos";
  chaos.operations = {"chaos"};
  chaos.type = "tool";
  chaos.inputs = {};
  chaos.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2166";
  chaos.inputs.push_back(ins);
  chaos.inTypes.push_back("http://edamontology.org/data_2166");
  sort (chaos.inTypes.begin(),chaos.inTypes.end());
  chaos.output = "http://edamontology.org/data_2887";
  emboss.push_back(chaos);

  Tool charge;
  charge.name = "charge";
  charge.id = "charge";
  charge.operations = {"charge"};
  charge.type = "tool";
  charge.inputs = {};
  charge.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1523";
  charge.inputs.push_back(ins);
  charge.inTypes.push_back("http://edamontology.org/data_1523");
  sort (charge.inTypes.begin(),charge.inTypes.end());
  charge.output = "http://edamontology.org/data_2886";
  charge.output = "http://edamontology.org/data_1502";
  emboss.push_back(charge);

  Tool checktrans;
  checktrans.name = "checktrans";
  checktrans.id = "checktrans";
  checktrans.operations = {"checktrans"};
  checktrans.type = "tool";
  checktrans.inputs = {};
  checktrans.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  checktrans.inputs.push_back(ins);
  checktrans.inTypes.push_back("http://edamontology.org/data_1276");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0849";
  checktrans.inputs.push_back(ins);
  checktrans.inTypes.push_back("http://edamontology.org/data_0849");
  ins.label = "output2";
  ins.type = "http://edamontology.org/data_1277";
  checktrans.inputs.push_back(ins);
  checktrans.inTypes.push_back("http://edamontology.org/data_1277");
  sort (checktrans.inTypes.begin(),checktrans.inTypes.end());
  checktrans.output = "http://edamontology.org/data_2886";
  emboss.push_back(checktrans);

  Tool chips;
  chips.name = "chips";
  chips.id = "chips";
  chips.operations = {"chips"};
  chips.type = "tool";
  chips.inputs = {};
  chips.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2865";
  chips.inputs.push_back(ins);
  chips.inTypes.push_back("http://edamontology.org/data_2865");
  sort (chips.inTypes.begin(),chips.inTypes.end());
  chips.output = "http://edamontology.org/data_2887";
  emboss.push_back(chips);

  Tool cirdna;
  cirdna.name = "cirdna";
  cirdna.id = "cirdna";
  cirdna.operations = {"cirdna"};
  cirdna.type = "tool";
  cirdna.inputs = {};
  cirdna.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1278";
  cirdna.inputs.push_back(ins);
  cirdna.inTypes.push_back("http://edamontology.org/data_1278");
  sort (cirdna.inTypes.begin(),cirdna.inTypes.end());
  emboss.push_back(cirdna);

  Tool codcmp;
  codcmp.name = "codcmp";
  codcmp.id = "codcmp";
  codcmp.operations = {"codcmp"};
  codcmp.type = "tool";
  codcmp.inputs = {};
  codcmp.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1602";
  codcmp.inputs.push_back(ins);
  codcmp.inTypes.push_back("http://edamontology.org/data_1602");
  sort (codcmp.inTypes.begin(),codcmp.inTypes.end());
  codcmp.output = "http://edamontology.org/data_1597";
  codcmp.output = "http://edamontology.org/data_1597";
  emboss.push_back(codcmp);

  Tool codcopy;
  codcopy.name = "codcopy";
  codcopy.id = "codcopy";
  codcopy.operations = {"codcopy"};
  codcopy.type = "tool";
  codcopy.inputs = {};
  codcopy.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1597";
  codcopy.inputs.push_back(ins);
  codcopy.inTypes.push_back("http://edamontology.org/data_1597");
  sort (codcopy.inTypes.begin(),codcopy.inTypes.end());
  codcopy.output = "http://edamontology.org/data_1597";
  emboss.push_back(codcopy);

  Tool coderet;
  coderet.name = "coderet";
  coderet.id = "coderet";
  coderet.operations = {"coderet"};
  coderet.type = "tool";
  coderet.inputs = {};
  coderet.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  coderet.inputs.push_back(ins);
  coderet.inTypes.push_back("http://edamontology.org/data_2887");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2886";
  coderet.inputs.push_back(ins);
  coderet.inTypes.push_back("http://edamontology.org/data_2886");
  sort (coderet.inTypes.begin(),coderet.inTypes.end());
  coderet.output = "http://edamontology.org/data_2887";
  emboss.push_back(coderet);

  Tool compseq;
  compseq.name = "compseq";
  compseq.id = "compseq";
  compseq.operations = {"compseq"};
  compseq.type = "tool";
  compseq.inputs = {};
  compseq.inTypes = {};

  sort (compseq.inTypes.begin(),compseq.inTypes.end());
  compseq.output = "http://edamontology.org/data_0849";
  compseq.output = "http://edamontology.org/data_1261";
  emboss.push_back(compseq);

  Tool cons;
  cons.name = "cons";
  cons.id = "cons";
  cons.operations = {"cons"};
  cons.type = "tool";
  cons.inputs = {};
  cons.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  cons.inputs.push_back(ins);
  cons.inTypes.push_back("http://edamontology.org/data_0849");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0848";
  cons.inputs.push_back(ins);
  cons.inTypes.push_back("http://edamontology.org/data_0848");
  sort (cons.inTypes.begin(),cons.inTypes.end());
  cons.output = "http://edamontology.org/data_0863";
  cons.output = "http://edamontology.org/data_0874";
  emboss.push_back(cons);

  Tool consambig;
  consambig.name = "consambig";
  consambig.id = "consambig";
  consambig.operations = {"consambig"};
  consambig.type = "tool";
  consambig.inputs = {};
  consambig.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  consambig.inputs.push_back(ins);
  consambig.inTypes.push_back("http://edamontology.org/data_0849");
  sort (consambig.inTypes.begin(),consambig.inTypes.end());
  consambig.output = "http://edamontology.org/data_0863";
  emboss.push_back(consambig);

  Tool cpgplot;
  cpgplot.name = "cpgplot";
  cpgplot.id = "cpgplot";
  cpgplot.operations = {"cpgplot"};
  cpgplot.type = "tool";
  cpgplot.inputs = {};
  cpgplot.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  cpgplot.inputs.push_back(ins);
  cpgplot.inTypes.push_back("http://edamontology.org/data_1276");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2968";
  cpgplot.inputs.push_back(ins);
  cpgplot.inTypes.push_back("http://edamontology.org/data_2968");
  ins.label = "output2";
  ins.type = "http://edamontology.org/data_1276";
  cpgplot.inputs.push_back(ins);
  cpgplot.inTypes.push_back("http://edamontology.org/data_1276");
  sort (cpgplot.inTypes.begin(),cpgplot.inTypes.end());
  cpgplot.output = "http://edamontology.org/data_2887";
  emboss.push_back(cpgplot);

  Tool cpgplot_ebi;
  cpgplot_ebi.name = "cpgplot-ebi";
  cpgplot_ebi.id = "cpgplot-ebi";
  cpgplot_ebi.operations = {"cpgplot-ebi"};
  cpgplot_ebi.type = "tool";
  cpgplot_ebi.inputs = {};
  cpgplot_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  cpgplot_ebi.inputs.push_back(ins);
  cpgplot_ebi.inTypes.push_back("http://edamontology.org/data_1276");
  sort (cpgplot_ebi.inTypes.begin(),cpgplot_ebi.inTypes.end());
  cpgplot_ebi.output = "http://edamontology.org/data_2977";
  emboss.push_back(cpgplot_ebi);

  Tool cpgreport;
  cpgreport.name = "cpgreport";
  cpgreport.id = "cpgreport";
  cpgreport.operations = {"cpgreport"};
  cpgreport.type = "tool";
  cpgreport.inputs = {};
  cpgreport.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  cpgreport.inputs.push_back(ins);
  cpgreport.inTypes.push_back("http://edamontology.org/data_1276");
  sort (cpgreport.inTypes.begin(),cpgreport.inTypes.end());
  cpgreport.output = "http://edamontology.org/data_2887";
  emboss.push_back(cpgreport);

  Tool cusp;
  cusp.name = "cusp";
  cusp.id = "cusp";
  cusp.operations = {"cusp"};
  cusp.type = "tool";
  cusp.inputs = {};
  cusp.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1597";
  cusp.inputs.push_back(ins);
  cusp.inTypes.push_back("http://edamontology.org/data_1597");
  sort (cusp.inTypes.begin(),cusp.inTypes.end());
  cusp.output = "http://edamontology.org/data_2887";
  emboss.push_back(cusp);

  Tool cutgextract;
  cutgextract.name = "cutgextract";
  cutgextract.id = "cutgextract";
  cutgextract.operations = {"cutgextract"};
  cutgextract.type = "tool";
  cutgextract.inputs = {};
  cutgextract.inTypes = {};

  sort (cutgextract.inTypes.begin(),cutgextract.inTypes.end());
  cutgextract.output = "http://edamontology.org/data_1597";
  emboss.push_back(cutgextract);

  Tool cutseq;
  cutseq.name = "cutseq";
  cutseq.id = "cutseq";
  cutseq.operations = {"cutseq"};
  cutseq.type = "tool";
  cutseq.inputs = {};
  cutseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  cutseq.inputs.push_back(ins);
  cutseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (cutseq.inTypes.begin(),cutseq.inTypes.end());
  cutseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(cutseq);

  Tool dan;
  dan.name = "dan";
  dan.id = "dan";
  dan.operations = {"dan"};
  dan.type = "tool";
  dan.inputs = {};
  dan.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2968";
  dan.inputs.push_back(ins);
  dan.inTypes.push_back("http://edamontology.org/data_2968");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_1583";
  dan.inputs.push_back(ins);
  dan.inTypes.push_back("http://edamontology.org/data_1583");
  sort (dan.inTypes.begin(),dan.inTypes.end());
  dan.output = "http://edamontology.org/data_2887";
  emboss.push_back(dan);

  Tool dbiblast;
  dbiblast.name = "dbiblast";
  dbiblast.id = "dbiblast";
  dbiblast.operations = {"dbiblast"};
  dbiblast.type = "tool";
  dbiblast.inputs = {};
  dbiblast.inTypes = {};

  sort (dbiblast.inTypes.begin(),dbiblast.inTypes.end());
  emboss.push_back(dbiblast);

  Tool dbifasta;
  dbifasta.name = "dbifasta";
  dbifasta.id = "dbifasta";
  dbifasta.operations = {"dbifasta"};
  dbifasta.type = "tool";
  dbifasta.inputs = {};
  dbifasta.inTypes = {};

  sort (dbifasta.inTypes.begin(),dbifasta.inTypes.end());
  emboss.push_back(dbifasta);

  Tool dbiflat;
  dbiflat.name = "dbiflat";
  dbiflat.id = "dbiflat";
  dbiflat.operations = {"dbiflat"};
  dbiflat.type = "tool";
  dbiflat.inputs = {};
  dbiflat.inTypes = {};

  sort (dbiflat.inTypes.begin(),dbiflat.inTypes.end());
  emboss.push_back(dbiflat);

  Tool dbigcg;
  dbigcg.name = "dbigcg";
  dbigcg.id = "dbigcg";
  dbigcg.operations = {"dbigcg"};
  dbigcg.type = "tool";
  dbigcg.inputs = {};
  dbigcg.inTypes = {};

  sort (dbigcg.inTypes.begin(),dbigcg.inTypes.end());
  emboss.push_back(dbigcg);

  Tool dbtell;
  dbtell.name = "dbtell";
  dbtell.id = "dbtell";
  dbtell.operations = {"dbtell"};
  dbtell.type = "tool";
  dbtell.inputs = {};
  dbtell.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  dbtell.inputs.push_back(ins);
  dbtell.inTypes.push_back("http://edamontology.org/data_0957");
  sort (dbtell.inTypes.begin(),dbtell.inTypes.end());
  emboss.push_back(dbtell);

  Tool dbxcompress;
  dbxcompress.name = "dbxcompress";
  dbxcompress.id = "dbxcompress";
  dbxcompress.operations = {"dbxcompress"};
  dbxcompress.type = "tool";
  dbxcompress.inputs = {};
  dbxcompress.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  dbxcompress.inputs.push_back(ins);
  dbxcompress.inTypes.push_back("http://edamontology.org/data_2048");
  sort (dbxcompress.inTypes.begin(),dbxcompress.inTypes.end());
  emboss.push_back(dbxcompress);

  Tool dbxedam;
  dbxedam.name = "dbxedam";
  dbxedam.id = "dbxedam";
  dbxedam.operations = {"dbxedam"};
  dbxedam.type = "tool";
  dbxedam.inputs = {};
  dbxedam.inTypes = {};

  sort (dbxedam.inTypes.begin(),dbxedam.inTypes.end());
  emboss.push_back(dbxedam);

  Tool dbxfasta;
  dbxfasta.name = "dbxfasta";
  dbxfasta.id = "dbxfasta";
  dbxfasta.operations = {"dbxfasta"};
  dbxfasta.type = "tool";
  dbxfasta.inputs = {};
  dbxfasta.inTypes = {};

  sort (dbxfasta.inTypes.begin(),dbxfasta.inTypes.end());
  emboss.push_back(dbxfasta);

  Tool dbxflat;
  dbxflat.name = "dbxflat";
  dbxflat.id = "dbxflat";
  dbxflat.operations = {"dbxflat"};
  dbxflat.type = "tool";
  dbxflat.inputs = {};
  dbxflat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  dbxflat.inputs.push_back(ins);
  dbxflat.inTypes.push_back("http://edamontology.org/data_0958");
  sort (dbxflat.inTypes.begin(),dbxflat.inTypes.end());
  emboss.push_back(dbxflat);

  Tool dbxgcg;
  dbxgcg.name = "dbxgcg";
  dbxgcg.id = "dbxgcg";
  dbxgcg.operations = {"dbxgcg"};
  dbxgcg.type = "tool";
  dbxgcg.inputs = {};
  dbxgcg.inTypes = {};

  sort (dbxgcg.inTypes.begin(),dbxgcg.inTypes.end());
  emboss.push_back(dbxgcg);

  Tool dbxobo;
  dbxobo.name = "dbxobo";
  dbxobo.id = "dbxobo";
  dbxobo.operations = {"dbxobo"};
  dbxobo.type = "tool";
  dbxobo.inputs = {};
  dbxobo.inTypes = {};

  sort (dbxobo.inTypes.begin(),dbxobo.inTypes.end());
  emboss.push_back(dbxobo);

  Tool dbxreport;
  dbxreport.name = "dbxreport";
  dbxreport.id = "dbxreport";
  dbxreport.operations = {"dbxreport"};
  dbxreport.type = "tool";
  dbxreport.inputs = {};
  dbxreport.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  dbxreport.inputs.push_back(ins);
  dbxreport.inTypes.push_back("http://edamontology.org/data_2048");
  sort (dbxreport.inTypes.begin(),dbxreport.inTypes.end());
  emboss.push_back(dbxreport);

  Tool dbxresource;
  dbxresource.name = "dbxresource";
  dbxresource.id = "dbxresource";
  dbxresource.operations = {"dbxresource"};
  dbxresource.type = "tool";
  dbxresource.inputs = {};
  dbxresource.inTypes = {};

  sort (dbxresource.inTypes.begin(),dbxresource.inTypes.end());
  emboss.push_back(dbxresource);

  Tool dbxstat;
  dbxstat.name = "dbxstat";
  dbxstat.id = "dbxstat";
  dbxstat.operations = {"dbxstat"};
  dbxstat.type = "tool";
  dbxstat.inputs = {};
  dbxstat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  dbxstat.inputs.push_back(ins);
  dbxstat.inTypes.push_back("http://edamontology.org/data_2048");
  sort (dbxstat.inTypes.begin(),dbxstat.inTypes.end());
  emboss.push_back(dbxstat);

  Tool dbxtax;
  dbxtax.name = "dbxtax";
  dbxtax.id = "dbxtax";
  dbxtax.operations = {"dbxtax"};
  dbxtax.type = "tool";
  dbxtax.inputs = {};
  dbxtax.inTypes = {};

  sort (dbxtax.inTypes.begin(),dbxtax.inTypes.end());
  emboss.push_back(dbxtax);

  Tool dbxuncompress;
  dbxuncompress.name = "dbxuncompress";
  dbxuncompress.id = "dbxuncompress";
  dbxuncompress.operations = {"dbxuncompress"};
  dbxuncompress.type = "tool";
  dbxuncompress.inputs = {};
  dbxuncompress.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  dbxuncompress.inputs.push_back(ins);
  dbxuncompress.inTypes.push_back("http://edamontology.org/data_2048");
  sort (dbxuncompress.inTypes.begin(),dbxuncompress.inTypes.end());
  emboss.push_back(dbxuncompress);

  Tool degapseq;
  degapseq.name = "degapseq";
  degapseq.id = "degapseq";
  degapseq.operations = {"degapseq"};
  degapseq.type = "tool";
  degapseq.inputs = {};
  degapseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  degapseq.inputs.push_back(ins);
  degapseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (degapseq.inTypes.begin(),degapseq.inTypes.end());
  degapseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(degapseq);

  Tool density;
  density.name = "density";
  density.id = "density";
  density.operations = {"density"};
  density.type = "tool";
  density.inputs = {};
  density.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2167";
  density.inputs.push_back(ins);
  density.inTypes.push_back("http://edamontology.org/data_2167");
  sort (density.inTypes.begin(),density.inTypes.end());
  density.output = "http://edamontology.org/data_2887";
  emboss.push_back(density);

  Tool descseq;
  descseq.name = "descseq";
  descseq.id = "descseq";
  descseq.operations = {"descseq"};
  descseq.type = "tool";
  descseq.inputs = {};
  descseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  descseq.inputs.push_back(ins);
  descseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (descseq.inTypes.begin(),descseq.inTypes.end());
  descseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(descseq);

  Tool diffseq;
  diffseq.name = "diffseq";
  diffseq.id = "diffseq";
  diffseq.operations = {"diffseq"};
  diffseq.type = "tool";
  diffseq.inputs = {};
  diffseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  diffseq.inputs.push_back(ins);
  diffseq.inTypes.push_back("http://edamontology.org/data_1255");
  sort (diffseq.inTypes.begin(),diffseq.inTypes.end());
  diffseq.output = "http://edamontology.org/data_0849";
  diffseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(diffseq);

  Tool distmat;
  distmat.name = "distmat";
  distmat.id = "distmat";
  distmat.operations = {"distmat"};
  distmat.type = "tool";
  distmat.inputs = {};
  distmat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0870";
  distmat.inputs.push_back(ins);
  distmat.inTypes.push_back("http://edamontology.org/data_0870");
  sort (distmat.inTypes.begin(),distmat.inTypes.end());
  distmat.output = "http://edamontology.org/data_0863";
  emboss.push_back(distmat);

  Tool dotmatcher;
  dotmatcher.name = "dotmatcher";
  dotmatcher.id = "dotmatcher";
  dotmatcher.operations = {"dotmatcher"};
  dotmatcher.type = "tool";
  dotmatcher.inputs = {};
  dotmatcher.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0862";
  dotmatcher.inputs.push_back(ins);
  dotmatcher.inTypes.push_back("http://edamontology.org/data_0862");
  sort (dotmatcher.inTypes.begin(),dotmatcher.inTypes.end());
  dotmatcher.output = "http://edamontology.org/data_0849";
  dotmatcher.output = "http://edamontology.org/data_0849";
  dotmatcher.output = "http://edamontology.org/data_0874";
  emboss.push_back(dotmatcher);

  Tool dotpath;
  dotpath.name = "dotpath";
  dotpath.id = "dotpath";
  dotpath.operations = {"dotpath"};
  dotpath.type = "tool";
  dotpath.inputs = {};
  dotpath.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0862";
  dotpath.inputs.push_back(ins);
  dotpath.inTypes.push_back("http://edamontology.org/data_0862");
  sort (dotpath.inTypes.begin(),dotpath.inTypes.end());
  dotpath.output = "http://edamontology.org/data_0849";
  dotpath.output = "http://edamontology.org/data_0849";
  emboss.push_back(dotpath);

  Tool dottup;
  dottup.name = "dottup";
  dottup.id = "dottup";
  dottup.operations = {"dottup"};
  dottup.type = "tool";
  dottup.inputs = {};
  dottup.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0862";
  dottup.inputs.push_back(ins);
  dottup.inTypes.push_back("http://edamontology.org/data_0862");
  sort (dottup.inTypes.begin(),dottup.inTypes.end());
  dottup.output = "http://edamontology.org/data_0849";
  dottup.output = "http://edamontology.org/data_0849";
  emboss.push_back(dottup);

  Tool dreg;
  dreg.name = "dreg";
  dreg.id = "dreg";
  dreg.operations = {"dreg"};
  dreg.type = "tool";
  dreg.inputs = {};
  dreg.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1114";
  dreg.inputs.push_back(ins);
  dreg.inTypes.push_back("http://edamontology.org/data_1114");
  sort (dreg.inTypes.begin(),dreg.inTypes.end());
  dreg.output = "http://edamontology.org/data_2887";
  dreg.output = "http://edamontology.org/data_1352";
  emboss.push_back(dreg);

  Tool drfinddata;
  drfinddata.name = "drfinddata";
  drfinddata.id = "drfinddata";
  drfinddata.operations = {"drfinddata"};
  drfinddata.type = "tool";
  drfinddata.inputs = {};
  drfinddata.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drfinddata.inputs.push_back(ins);
  drfinddata.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drfinddata.inTypes.begin(),drfinddata.inTypes.end());
  emboss.push_back(drfinddata);

  Tool drfindformat;
  drfindformat.name = "drfindformat";
  drfindformat.id = "drfindformat";
  drfindformat.operations = {"drfindformat"};
  drfindformat.type = "tool";
  drfindformat.inputs = {};
  drfindformat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drfindformat.inputs.push_back(ins);
  drfindformat.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drfindformat.inTypes.begin(),drfindformat.inTypes.end());
  emboss.push_back(drfindformat);

  Tool drfindid;
  drfindid.name = "drfindid";
  drfindid.id = "drfindid";
  drfindid.operations = {"drfindid"};
  drfindid.type = "tool";
  drfindid.inputs = {};
  drfindid.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drfindid.inputs.push_back(ins);
  drfindid.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drfindid.inTypes.begin(),drfindid.inTypes.end());
  emboss.push_back(drfindid);

  Tool drfindresource;
  drfindresource.name = "drfindresource";
  drfindresource.id = "drfindresource";
  drfindresource.operations = {"drfindresource"};
  drfindresource.type = "tool";
  drfindresource.inputs = {};
  drfindresource.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drfindresource.inputs.push_back(ins);
  drfindresource.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drfindresource.inTypes.begin(),drfindresource.inTypes.end());
  emboss.push_back(drfindresource);

  Tool drget;
  drget.name = "drget";
  drget.id = "drget";
  drget.operations = {"drget"};
  drget.type = "tool";
  drget.inputs = {};
  drget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drget.inputs.push_back(ins);
  drget.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drget.inTypes.begin(),drget.inTypes.end());
  drget.output = "http://edamontology.org/data_0957";
  emboss.push_back(drget);

  Tool drtext;
  drtext.name = "drtext";
  drtext.id = "drtext";
  drtext.operations = {"drtext"};
  drtext.type = "tool";
  drtext.inputs = {};
  drtext.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  drtext.inputs.push_back(ins);
  drtext.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drtext.inTypes.begin(),drtext.inTypes.end());
  drtext.output = "http://edamontology.org/data_0957";
  emboss.push_back(drtext);

  Tool edamdef;
  edamdef.name = "edamdef";
  edamdef.id = "edamdef";
  edamdef.operations = {"edamdef"};
  edamdef.type = "tool";
  edamdef.inputs = {};
  edamdef.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamdef.inputs.push_back(ins);
  edamdef.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamdef.inTypes.begin(),edamdef.inTypes.end());
  emboss.push_back(edamdef);

  Tool edamhasinput;
  edamhasinput.name = "edamhasinput";
  edamhasinput.id = "edamhasinput";
  edamhasinput.operations = {"edamhasinput"};
  edamhasinput.type = "tool";
  edamhasinput.inputs = {};
  edamhasinput.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamhasinput.inputs.push_back(ins);
  edamhasinput.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamhasinput.inTypes.begin(),edamhasinput.inTypes.end());
  emboss.push_back(edamhasinput);

  Tool edamhasoutput;
  edamhasoutput.name = "edamhasoutput";
  edamhasoutput.id = "edamhasoutput";
  edamhasoutput.operations = {"edamhasoutput"};
  edamhasoutput.type = "tool";
  edamhasoutput.inputs = {};
  edamhasoutput.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamhasoutput.inputs.push_back(ins);
  edamhasoutput.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamhasoutput.inTypes.begin(),edamhasoutput.inTypes.end());
  emboss.push_back(edamhasoutput);

  Tool edamisformat;
  edamisformat.name = "edamisformat";
  edamisformat.id = "edamisformat";
  edamisformat.operations = {"edamisformat"};
  edamisformat.type = "tool";
  edamisformat.inputs = {};
  edamisformat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamisformat.inputs.push_back(ins);
  edamisformat.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamisformat.inTypes.begin(),edamisformat.inTypes.end());
  emboss.push_back(edamisformat);

  Tool edamisid;
  edamisid.name = "edamisid";
  edamisid.id = "edamisid";
  edamisid.operations = {"edamisid"};
  edamisid.type = "tool";
  edamisid.inputs = {};
  edamisid.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamisid.inputs.push_back(ins);
  edamisid.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamisid.inTypes.begin(),edamisid.inTypes.end());
  emboss.push_back(edamisid);

  Tool edamname;
  edamname.name = "edamname";
  edamname.id = "edamname";
  edamname.operations = {"edamname"};
  edamname.type = "tool";
  edamname.inputs = {};
  edamname.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  edamname.inputs.push_back(ins);
  edamname.inTypes.push_back("http://edamontology.org/data_2223");
  sort (edamname.inTypes.begin(),edamname.inTypes.end());
  emboss.push_back(edamname);

  Tool edialign;
  edialign.name = "edialign";
  edialign.id = "edialign";
  edialign.operations = {"edialign"};
  edialign.type = "tool";
  edialign.inputs = {};
  edialign.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0863";
  edialign.inputs.push_back(ins);
  edialign.inTypes.push_back("http://edamontology.org/data_0863");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0849";
  edialign.inputs.push_back(ins);
  edialign.inTypes.push_back("http://edamontology.org/data_0849");
  sort (edialign.inTypes.begin(),edialign.inTypes.end());
  edialign.output = "http://edamontology.org/data_0849";
  emboss.push_back(edialign);

  Tool einverted;
  einverted.name = "einverted";
  einverted.id = "einverted";
  einverted.operations = {"einverted"};
  einverted.type = "tool";
  einverted.inputs = {};
  einverted.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  einverted.inputs.push_back(ins);
  einverted.inTypes.push_back("http://edamontology.org/data_2048");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0849";
  einverted.inputs.push_back(ins);
  einverted.inTypes.push_back("http://edamontology.org/data_0849");
  sort (einverted.inTypes.begin(),einverted.inTypes.end());
  einverted.output = "http://edamontology.org/data_2887";
  emboss.push_back(einverted);

  Tool embossdata;
  embossdata.name = "embossdata";
  embossdata.id = "embossdata";
  embossdata.operations = {"embossdata"};
  embossdata.type = "tool";
  embossdata.inputs = {};
  embossdata.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  embossdata.inputs.push_back(ins);
  embossdata.inTypes.push_back("http://edamontology.org/data_0957");
  sort (embossdata.inTypes.begin(),embossdata.inTypes.end());
  emboss.push_back(embossdata);

  Tool embossupdate;
  embossupdate.name = "embossupdate";
  embossupdate.id = "embossupdate";
  embossupdate.operations = {"embossupdate"};
  embossupdate.type = "tool";
  embossupdate.inputs = {};
  embossupdate.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  embossupdate.inputs.push_back(ins);
  embossupdate.inTypes.push_back("http://edamontology.org/data_0958");
  sort (embossupdate.inTypes.begin(),embossupdate.inTypes.end());
  emboss.push_back(embossupdate);

  Tool embossversion;
  embossversion.name = "embossversion";
  embossversion.id = "embossversion";
  embossversion.operations = {"embossversion"};
  embossversion.type = "tool";
  embossversion.inputs = {};
  embossversion.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  embossversion.inputs.push_back(ins);
  embossversion.inTypes.push_back("http://edamontology.org/data_0958");
  sort (embossversion.inTypes.begin(),embossversion.inTypes.end());
  emboss.push_back(embossversion);

  Tool emma;
  emma.name = "emma";
  emma.id = "emma";
  emma.operations = {"emma"};
  emma.type = "tool";
  emma.inputs = {};
  emma.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  emma.inputs.push_back(ins);
  emma.inTypes.push_back("http://edamontology.org/data_0849");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0872";
  emma.inputs.push_back(ins);
  emma.inTypes.push_back("http://edamontology.org/data_0872");
  sort (emma.inTypes.begin(),emma.inTypes.end());
  emma.output = "http://edamontology.org/data_0849";
  emma.output = "http://edamontology.org/data_0872";
  emma.output = "http://edamontology.org/data_0874";
  emma.output = "http://edamontology.org/data_0874";
  emboss.push_back(emma);

  Tool emowse;
  emowse.name = "emowse";
  emowse.id = "emowse";
  emowse.operations = {"emowse"};
  emowse.type = "tool";
  emowse.inputs = {};
  emowse.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1262";
  emowse.inputs.push_back(ins);
  emowse.inTypes.push_back("http://edamontology.org/data_1262");
  sort (emowse.inTypes.begin(),emowse.inTypes.end());
  emowse.output = "http://edamontology.org/data_2886";
  emowse.output = "http://edamontology.org/data_1519";
  emowse.output = "http://edamontology.org/data_1505";
  emowse.output = "http://edamontology.org/data_1519";
  emboss.push_back(emowse);

  Tool entret;
  entret.name = "entret";
  entret.id = "entret";
  entret.operations = {"entret"};
  entret.type = "tool";
  entret.inputs = {};
  entret.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  entret.inputs.push_back(ins);
  entret.inTypes.push_back("http://edamontology.org/data_0957");
  sort (entret.inTypes.begin(),entret.inTypes.end());
  entret.output = "http://edamontology.org/data_0849";
  emboss.push_back(entret);

  Tool epestfind;
  epestfind.name = "epestfind";
  epestfind.id = "epestfind";
  epestfind.operations = {"epestfind"};
  epestfind.type = "tool";
  epestfind.inputs = {};
  epestfind.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  epestfind.inputs.push_back(ins);
  epestfind.inTypes.push_back("http://edamontology.org/data_1277");
  sort (epestfind.inTypes.begin(),epestfind.inTypes.end());
  epestfind.output = "http://edamontology.org/data_2886";
  epestfind.output = "http://edamontology.org/data_1505";
  emboss.push_back(epestfind);

  Tool eprimer3;
  eprimer3.name = "eprimer3";
  eprimer3.id = "eprimer3";
  eprimer3.operations = {"eprimer3"};
  eprimer3.type = "tool";
  eprimer3.inputs = {};
  eprimer3.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  eprimer3.inputs.push_back(ins);
  eprimer3.inTypes.push_back("http://edamontology.org/data_1276");
  sort (eprimer3.inTypes.begin(),eprimer3.inTypes.end());
  eprimer3.output = "http://edamontology.org/data_2887";
  eprimer3.output = "http://edamontology.org/data_0850";
  eprimer3.output = "http://edamontology.org/data_0850";
  emboss.push_back(eprimer3);

  Tool eprimer32;
  eprimer32.name = "eprimer32";
  eprimer32.id = "eprimer32";
  eprimer32.operations = {"eprimer32"};
  eprimer32.type = "tool";
  eprimer32.inputs = {};
  eprimer32.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  eprimer32.inputs.push_back(ins);
  eprimer32.inTypes.push_back("http://edamontology.org/data_1276");
  sort (eprimer32.inTypes.begin(),eprimer32.inTypes.end());
  eprimer32.output = "http://edamontology.org/data_2887";
  eprimer32.output = "http://edamontology.org/data_0850";
  eprimer32.output = "http://edamontology.org/data_0850";
  emboss.push_back(eprimer32);

  Tool equicktandem;
  equicktandem.name = "equicktandem";
  equicktandem.id = "equicktandem";
  equicktandem.operations = {"equicktandem"};
  equicktandem.type = "tool";
  equicktandem.inputs = {};
  equicktandem.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2955";
  equicktandem.inputs.push_back(ins);
  equicktandem.inTypes.push_back("http://edamontology.org/data_2955");
  sort (equicktandem.inTypes.begin(),equicktandem.inTypes.end());
  equicktandem.output = "http://edamontology.org/data_2887";
  emboss.push_back(equicktandem);

  Tool est2genome;
  est2genome.name = "est2genome";
  est2genome.id = "est2genome";
  est2genome.operations = {"est2genome"};
  est2genome.type = "tool";
  est2genome.inputs = {};
  est2genome.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  est2genome.inputs.push_back(ins);
  est2genome.inTypes.push_back("http://edamontology.org/data_1276");
  sort (est2genome.inTypes.begin(),est2genome.inTypes.end());
  est2genome.output = "http://edamontology.org/data_2887";
  est2genome.output = "http://edamontology.org/data_2887";
  emboss.push_back(est2genome);

  Tool etandem;
  etandem.name = "etandem";
  etandem.id = "etandem";
  etandem.operations = {"etandem"};
  etandem.type = "tool";
  etandem.inputs = {};
  etandem.inTypes = {};

  sort (etandem.inTypes.begin(),etandem.inTypes.end());
  etandem.output = "http://edamontology.org/data_2887";
  emboss.push_back(etandem);

  Tool extractalign;
  extractalign.name = "extractalign";
  extractalign.id = "extractalign";
  extractalign.operations = {"extractalign"};
  extractalign.type = "tool";
  extractalign.inputs = {};
  extractalign.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  extractalign.inputs.push_back(ins);
  extractalign.inTypes.push_back("http://edamontology.org/data_0849");
  sort (extractalign.inTypes.begin(),extractalign.inTypes.end());
  extractalign.output = "http://edamontology.org/data_0863";
  emboss.push_back(extractalign);

  Tool extractfeat;
  extractfeat.name = "extractfeat";
  extractfeat.id = "extractfeat";
  extractfeat.operations = {"extractfeat"};
  extractfeat.type = "tool";
  extractfeat.inputs = {};
  extractfeat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  extractfeat.inputs.push_back(ins);
  extractfeat.inTypes.push_back("http://edamontology.org/data_0849");
  sort (extractfeat.inTypes.begin(),extractfeat.inTypes.end());
  extractfeat.output = "http://edamontology.org/data_0849";
  emboss.push_back(extractfeat);

  Tool extractseq;
  extractseq.name = "extractseq";
  extractseq.id = "extractseq";
  extractseq.operations = {"extractseq"};
  extractseq.type = "tool";
  extractseq.inputs = {};
  extractseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  extractseq.inputs.push_back(ins);
  extractseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (extractseq.inTypes.begin(),extractseq.inTypes.end());
  extractseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(extractseq);

  Tool featcopy;
  featcopy.name = "featcopy";
  featcopy.id = "featcopy";
  featcopy.operations = {"featcopy"};
  featcopy.type = "tool";
  featcopy.inputs = {};
  featcopy.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  featcopy.inputs.push_back(ins);
  featcopy.inTypes.push_back("http://edamontology.org/data_1255");
  sort (featcopy.inTypes.begin(),featcopy.inTypes.end());
  featcopy.output = "http://edamontology.org/data_1255";
  emboss.push_back(featcopy);

  Tool featmerge;
  featmerge.name = "featmerge";
  featmerge.id = "featmerge";
  featmerge.operations = {"featmerge"};
  featmerge.type = "tool";
  featmerge.inputs = {};
  featmerge.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  featmerge.inputs.push_back(ins);
  featmerge.inTypes.push_back("http://edamontology.org/data_1255");
  sort (featmerge.inTypes.begin(),featmerge.inTypes.end());
  featmerge.output = "http://edamontology.org/data_1255";
  emboss.push_back(featmerge);

  Tool featreport;
  featreport.name = "featreport";
  featreport.id = "featreport";
  featreport.operations = {"featreport"};
  featreport.type = "tool";
  featreport.inputs = {};
  featreport.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  featreport.inputs.push_back(ins);
  featreport.inTypes.push_back("http://edamontology.org/data_1255");
  sort (featreport.inTypes.begin(),featreport.inTypes.end());
  featreport.output = "http://edamontology.org/data_0849";
  featreport.output = "http://edamontology.org/data_1255";
  emboss.push_back(featreport);

  Tool feattext;
  feattext.name = "feattext";
  feattext.id = "feattext";
  feattext.operations = {"feattext"};
  feattext.type = "tool";
  feattext.inputs = {};
  feattext.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  feattext.inputs.push_back(ins);
  feattext.inTypes.push_back("http://edamontology.org/data_1255");
  sort (feattext.inTypes.begin(),feattext.inTypes.end());
  feattext.output = "http://edamontology.org/data_1255";
  emboss.push_back(feattext);

  Tool findkm;
  findkm.name = "findkm";
  findkm.id = "findkm";
  findkm.operations = {"findkm"};
  findkm.type = "tool";
  findkm.inputs = {};
  findkm.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2978";
  findkm.inputs.push_back(ins);
  findkm.inTypes.push_back("http://edamontology.org/data_2978");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2025";
  findkm.inputs.push_back(ins);
  findkm.inTypes.push_back("http://edamontology.org/data_2025");
  ins.label = "output2";
  ins.type = "http://edamontology.org/data_2026";
  findkm.inputs.push_back(ins);
  findkm.inTypes.push_back("http://edamontology.org/data_2026");
  sort (findkm.inTypes.begin(),findkm.inTypes.end());
  findkm.output = "http://edamontology.org/data_2024";
  emboss.push_back(findkm);

  Tool freak;
  freak.name = "freak";
  freak.id = "freak";
  freak.operations = {"freak"};
  freak.type = "tool";
  freak.inputs = {};
  freak.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2166";
  freak.inputs.push_back(ins);
  freak.inTypes.push_back("http://edamontology.org/data_2166");
  sort (freak.inTypes.begin(),freak.inTypes.end());
  freak.output = "http://edamontology.org/data_0849";
  emboss.push_back(freak);

  Tool fuzznuc;
  fuzznuc.name = "fuzznuc";
  fuzznuc.id = "fuzznuc";
  fuzznuc.operations = {"fuzznuc"};
  fuzznuc.type = "tool";
  fuzznuc.inputs = {};
  fuzznuc.inTypes = {};

  sort (fuzznuc.inTypes.begin(),fuzznuc.inTypes.end());
  fuzznuc.output = "http://edamontology.org/data_2887";
  fuzznuc.output = "http://edamontology.org/data_1353";
  emboss.push_back(fuzznuc);

  Tool fuzzpro;
  fuzzpro.name = "fuzzpro";
  fuzzpro.id = "fuzzpro";
  fuzzpro.operations = {"fuzzpro"};
  fuzzpro.type = "tool";
  fuzzpro.inputs = {};
  fuzzpro.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  fuzzpro.inputs.push_back(ins);
  fuzzpro.inTypes.push_back("http://edamontology.org/data_1255");
  sort (fuzzpro.inTypes.begin(),fuzzpro.inTypes.end());
  fuzzpro.output = "http://edamontology.org/data_1353";
  emboss.push_back(fuzzpro);

  Tool fuzztran;
  fuzztran.name = "fuzztran";
  fuzztran.id = "fuzztran";
  fuzztran.operations = {"fuzztran"};
  fuzztran.type = "tool";
  fuzztran.inputs = {};
  fuzztran.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1254";
  fuzztran.inputs.push_back(ins);
  fuzztran.inTypes.push_back("http://edamontology.org/data_1254");
  sort (fuzztran.inTypes.begin(),fuzztran.inTypes.end());
  fuzztran.output = "http://edamontology.org/data_2887";
  fuzztran.output = "http://edamontology.org/data_1353";
  emboss.push_back(fuzztran);

  Tool garnier;
  garnier.name = "garnier";
  garnier.id = "garnier";
  garnier.operations = {"garnier"};
  garnier.type = "tool";
  garnier.inputs = {};
  garnier.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  garnier.inputs.push_back(ins);
  garnier.inTypes.push_back("http://edamontology.org/data_1277");
  sort (garnier.inTypes.begin(),garnier.inTypes.end());
  garnier.output = "http://edamontology.org/data_2886";
  emboss.push_back(garnier);

  Tool geecee;
  geecee.name = "geecee";
  geecee.id = "geecee";
  geecee.operations = {"geecee"};
  geecee.type = "tool";
  geecee.inputs = {};
  geecee.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  geecee.inputs.push_back(ins);
  geecee.inTypes.push_back("http://edamontology.org/data_1276");
  sort (geecee.inTypes.begin(),geecee.inTypes.end());
  geecee.output = "http://edamontology.org/data_2887";
  emboss.push_back(geecee);

  Tool getorf;
  getorf.name = "getorf";
  getorf.id = "getorf";
  getorf.operations = {"getorf"};
  getorf.type = "tool";
  getorf.inputs = {};
  getorf.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2886";
  getorf.inputs.push_back(ins);
  getorf.inTypes.push_back("http://edamontology.org/data_2886");
  sort (getorf.inTypes.begin(),getorf.inTypes.end());
  getorf.output = "http://edamontology.org/data_2887";
  emboss.push_back(getorf);

  Tool godef;
  godef.name = "godef";
  godef.id = "godef";
  godef.operations = {"godef"};
  godef.type = "tool";
  godef.inputs = {};
  godef.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  godef.inputs.push_back(ins);
  godef.inTypes.push_back("http://edamontology.org/data_2223");
  sort (godef.inTypes.begin(),godef.inTypes.end());
  emboss.push_back(godef);

  Tool goname;
  goname.name = "goname";
  goname.id = "goname";
  goname.operations = {"goname"};
  goname.type = "tool";
  goname.inputs = {};
  goname.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  goname.inputs.push_back(ins);
  goname.inTypes.push_back("http://edamontology.org/data_2223");
  sort (goname.inTypes.begin(),goname.inTypes.end());
  emboss.push_back(goname);

  Tool helixturnhelix;
  helixturnhelix.name = "helixturnhelix";
  helixturnhelix.id = "helixturnhelix";
  helixturnhelix.operations = {"helixturnhelix"};
  helixturnhelix.type = "tool";
  helixturnhelix.inputs = {};
  helixturnhelix.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  helixturnhelix.inputs.push_back(ins);
  helixturnhelix.inTypes.push_back("http://edamontology.org/data_1277");
  sort (helixturnhelix.inTypes.begin(),helixturnhelix.inTypes.end());
  helixturnhelix.output = "http://edamontology.org/data_2886";
  emboss.push_back(helixturnhelix);

  Tool hmoment;
  hmoment.name = "hmoment";
  hmoment.id = "hmoment";
  hmoment.operations = {"hmoment"};
  hmoment.type = "tool";
  hmoment.inputs = {};
  hmoment.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1520";
  hmoment.inputs.push_back(ins);
  hmoment.inTypes.push_back("http://edamontology.org/data_1520");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_1520";
  hmoment.inputs.push_back(ins);
  hmoment.inTypes.push_back("http://edamontology.org/data_1520");
  sort (hmoment.inTypes.begin(),hmoment.inTypes.end());
  hmoment.output = "http://edamontology.org/data_2886";
  emboss.push_back(hmoment);

  Tool iep;
  iep.name = "iep";
  iep.id = "iep";
  iep.operations = {"iep"};
  iep.type = "tool";
  iep.inputs = {};
  iep.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1528";
  iep.inputs.push_back(ins);
  iep.inTypes.push_back("http://edamontology.org/data_1528");
  sort (iep.inTypes.begin(),iep.inTypes.end());
  iep.output = "http://edamontology.org/data_2886";
  emboss.push_back(iep);

  Tool infoalign;
  infoalign.name = "infoalign";
  infoalign.id = "infoalign";
  infoalign.operations = {"infoalign"};
  infoalign.type = "tool";
  infoalign.inputs = {};
  infoalign.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0867";
  infoalign.inputs.push_back(ins);
  infoalign.inTypes.push_back("http://edamontology.org/data_0867");
  sort (infoalign.inTypes.begin(),infoalign.inTypes.end());
  infoalign.output = "http://edamontology.org/data_0863";
  infoalign.output = "http://edamontology.org/data_0874";
  emboss.push_back(infoalign);

  Tool infoassembly;
  infoassembly.name = "infoassembly";
  infoassembly.id = "infoassembly";
  infoassembly.operations = {"infoassembly"};
  infoassembly.type = "tool";
  infoassembly.inputs = {};
  infoassembly.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  infoassembly.inputs.push_back(ins);
  infoassembly.inTypes.push_back("http://edamontology.org/data_2048");
  sort (infoassembly.inTypes.begin(),infoassembly.inTypes.end());
  infoassembly.output = "http://edamontology.org/data_0849";
  emboss.push_back(infoassembly);

  Tool infobase;
  infobase.name = "infobase";
  infobase.id = "infobase";
  infobase.operations = {"infobase"};
  infobase.type = "tool";
  infobase.inputs = {};
  infobase.inTypes = {};

  sort (infobase.inTypes.begin(),infobase.inTypes.end());
  emboss.push_back(infobase);

  Tool inforesidue;
  inforesidue.name = "inforesidue";
  inforesidue.id = "inforesidue";
  inforesidue.operations = {"inforesidue"};
  inforesidue.type = "tool";
  inforesidue.inputs = {};
  inforesidue.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  inforesidue.inputs.push_back(ins);
  inforesidue.inTypes.push_back("http://edamontology.org/data_1276");
  sort (inforesidue.inTypes.begin(),inforesidue.inTypes.end());
  inforesidue.output = "http://edamontology.org/data_1502";
  inforesidue.output = "http://edamontology.org/data_1505";
  emboss.push_back(inforesidue);

  Tool infoseq;
  infoseq.name = "infoseq";
  infoseq.id = "infoseq";
  infoseq.operations = {"infoseq"};
  infoseq.type = "tool";
  infoseq.inputs = {};
  infoseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0850";
  infoseq.inputs.push_back(ins);
  infoseq.inTypes.push_back("http://edamontology.org/data_0850");
  sort (infoseq.inTypes.begin(),infoseq.inTypes.end());
  infoseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(infoseq);

  Tool isochore;
  isochore.name = "isochore";
  isochore.id = "isochore";
  isochore.operations = {"isochore"};
  isochore.type = "tool";
  isochore.inputs = {};
  isochore.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  isochore.inputs.push_back(ins);
  isochore.inTypes.push_back("http://edamontology.org/data_1276");
  sort (isochore.inTypes.begin(),isochore.inTypes.end());
  isochore.output = "http://edamontology.org/data_2887";
  emboss.push_back(isochore);

  Tool jaspextract;
  jaspextract.name = "jaspextract";
  jaspextract.id = "jaspextract";
  jaspextract.operations = {"jaspextract"};
  jaspextract.type = "tool";
  jaspextract.inputs = {};
  jaspextract.inTypes = {};

  sort (jaspextract.inTypes.begin(),jaspextract.inTypes.end());
  emboss.push_back(jaspextract);

  Tool jaspscan;
  jaspscan.name = "jaspscan";
  jaspscan.id = "jaspscan";
  jaspscan.operations = {"jaspscan"};
  jaspscan.type = "tool";
  jaspscan.inputs = {};
  jaspscan.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0916";
  jaspscan.inputs.push_back(ins);
  jaspscan.inTypes.push_back("http://edamontology.org/data_0916");
  sort (jaspscan.inTypes.begin(),jaspscan.inTypes.end());
  jaspscan.output = "http://edamontology.org/data_0849";
  emboss.push_back(jaspscan);

  Tool lindna;
  lindna.name = "lindna";
  lindna.id = "lindna";
  lindna.operations = {"lindna"};
  lindna.type = "tool";
  lindna.inputs = {};
  lindna.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1278";
  lindna.inputs.push_back(ins);
  lindna.inTypes.push_back("http://edamontology.org/data_1278");
  sort (lindna.inTypes.begin(),lindna.inTypes.end());
  emboss.push_back(lindna);

  Tool listor;
  listor.name = "listor";
  listor.id = "listor";
  listor.operations = {"listor"};
  listor.type = "tool";
  listor.inputs = {};
  listor.inTypes = {};

  sort (listor.inTypes.begin(),listor.inTypes.end());
  listor.output = "http://edamontology.org/data_0849";
  listor.output = "http://edamontology.org/data_0849";
  emboss.push_back(listor);

  Tool makenucseq;
  makenucseq.name = "makenucseq";
  makenucseq.id = "makenucseq";
  makenucseq.operations = {"makenucseq"};
  makenucseq.type = "tool";
  makenucseq.inputs = {};
  makenucseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  makenucseq.inputs.push_back(ins);
  makenucseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (makenucseq.inTypes.begin(),makenucseq.inTypes.end());
  makenucseq.output = "http://edamontology.org/data_1597";
  emboss.push_back(makenucseq);

  Tool makeprotseq;
  makeprotseq.name = "makeprotseq";
  makeprotseq.id = "makeprotseq";
  makeprotseq.operations = {"makeprotseq"};
  makeprotseq.type = "tool";
  makeprotseq.inputs = {};
  makeprotseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2886";
  makeprotseq.inputs.push_back(ins);
  makeprotseq.inTypes.push_back("http://edamontology.org/data_2886");
  sort (makeprotseq.inTypes.begin(),makeprotseq.inTypes.end());
  makeprotseq.output = "http://edamontology.org/data_0897";
  emboss.push_back(makeprotseq);

  Tool marscan;
  marscan.name = "marscan";
  marscan.id = "marscan";
  marscan.operations = {"marscan"};
  marscan.type = "tool";
  marscan.inputs = {};
  marscan.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  marscan.inputs.push_back(ins);
  marscan.inTypes.push_back("http://edamontology.org/data_1276");
  sort (marscan.inTypes.begin(),marscan.inTypes.end());
  marscan.output = "http://edamontology.org/data_2887";
  emboss.push_back(marscan);

  Tool maskambignuc;
  maskambignuc.name = "maskambignuc";
  maskambignuc.id = "maskambignuc";
  maskambignuc.operations = {"maskambignuc"};
  maskambignuc.type = "tool";
  maskambignuc.inputs = {};
  maskambignuc.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  maskambignuc.inputs.push_back(ins);
  maskambignuc.inTypes.push_back("http://edamontology.org/data_2887");
  sort (maskambignuc.inTypes.begin(),maskambignuc.inTypes.end());
  maskambignuc.output = "http://edamontology.org/data_2887";
  emboss.push_back(maskambignuc);

  Tool maskambigprot;
  maskambigprot.name = "maskambigprot";
  maskambigprot.id = "maskambigprot";
  maskambigprot.operations = {"maskambigprot"};
  maskambigprot.type = "tool";
  maskambigprot.inputs = {};
  maskambigprot.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  maskambigprot.inputs.push_back(ins);
  maskambigprot.inTypes.push_back("http://edamontology.org/data_0849");
  sort (maskambigprot.inTypes.begin(),maskambigprot.inTypes.end());
  maskambigprot.output = "http://edamontology.org/data_2886";
  emboss.push_back(maskambigprot);

  Tool maskfeat;
  maskfeat.name = "maskfeat";
  maskfeat.id = "maskfeat";
  maskfeat.operations = {"maskfeat"};
  maskfeat.type = "tool";
  maskfeat.inputs = {};
  maskfeat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  maskfeat.inputs.push_back(ins);
  maskfeat.inTypes.push_back("http://edamontology.org/data_0849");
  sort (maskfeat.inTypes.begin(),maskfeat.inTypes.end());
  maskfeat.output = "http://edamontology.org/data_0849";
  emboss.push_back(maskfeat);

  Tool maskseq;
  maskseq.name = "maskseq";
  maskseq.id = "maskseq";
  maskseq.operations = {"maskseq"};
  maskseq.type = "tool";
  maskseq.inputs = {};
  maskseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  maskseq.inputs.push_back(ins);
  maskseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (maskseq.inTypes.begin(),maskseq.inTypes.end());
  maskseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(maskseq);

  Tool matcher;
  matcher.name = "matcher";
  matcher.id = "matcher";
  matcher.operations = {"matcher"};
  matcher.type = "tool";
  matcher.inputs = {};
  matcher.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  matcher.inputs.push_back(ins);
  matcher.inTypes.push_back("http://edamontology.org/data_1381");
  sort (matcher.inTypes.begin(),matcher.inTypes.end());
  matcher.output = "http://edamontology.org/data_0849";
  matcher.output = "http://edamontology.org/data_0849";
  matcher.output = "http://edamontology.org/data_0874";
  emboss.push_back(matcher);

  Tool matcher_ebi;
  matcher_ebi.name = "matcher-ebi";
  matcher_ebi.id = "matcher-ebi";
  matcher_ebi.operations = {"matcher-ebi"};
  matcher_ebi.type = "tool";
  matcher_ebi.inputs = {};
  matcher_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  matcher_ebi.inputs.push_back(ins);
  matcher_ebi.inTypes.push_back("http://edamontology.org/data_1381");
  sort (matcher_ebi.inTypes.begin(),matcher_ebi.inTypes.end());
  matcher_ebi.output = "http://edamontology.org/data_2044";
  emboss.push_back(matcher_ebi);

  Tool megamerger;
  megamerger.name = "megamerger";
  megamerger.id = "megamerger";
  megamerger.operations = {"megamerger"};
  megamerger.type = "tool";
  megamerger.inputs = {};
  megamerger.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  megamerger.inputs.push_back(ins);
  megamerger.inTypes.push_back("http://edamontology.org/data_0849");
  sort (megamerger.inTypes.begin(),megamerger.inTypes.end());
  megamerger.output = "http://edamontology.org/data_0849";
  megamerger.output = "http://edamontology.org/data_0849";
  emboss.push_back(megamerger);

  Tool merger;
  merger.name = "merger";
  merger.id = "merger";
  merger.operations = {"merger"};
  merger.type = "tool";
  merger.inputs = {};
  merger.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  merger.inputs.push_back(ins);
  merger.inTypes.push_back("http://edamontology.org/data_1381");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0849";
  merger.inputs.push_back(ins);
  merger.inTypes.push_back("http://edamontology.org/data_0849");
  sort (merger.inTypes.begin(),merger.inTypes.end());
  merger.output = "http://edamontology.org/data_0849";
  merger.output = "http://edamontology.org/data_0849";
  merger.output = "http://edamontology.org/data_0874";
  emboss.push_back(merger);

  Tool msbar;
  msbar.name = "msbar";
  msbar.id = "msbar";
  msbar.operations = {"msbar"};
  msbar.type = "tool";
  msbar.inputs = {};
  msbar.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  msbar.inputs.push_back(ins);
  msbar.inTypes.push_back("http://edamontology.org/data_0849");
  sort (msbar.inTypes.begin(),msbar.inTypes.end());
  msbar.output = "http://edamontology.org/data_0849";
  msbar.output = "http://edamontology.org/data_0849";
  emboss.push_back(msbar);

  Tool mwcontam;
  mwcontam.name = "mwcontam";
  mwcontam.id = "mwcontam";
  mwcontam.operations = {"mwcontam"};
  mwcontam.type = "tool";
  mwcontam.inputs = {};
  mwcontam.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1505";
  mwcontam.inputs.push_back(ins);
  mwcontam.inTypes.push_back("http://edamontology.org/data_1505");
  sort (mwcontam.inTypes.begin(),mwcontam.inTypes.end());
  mwcontam.output = "http://edamontology.org/data_1505";
  emboss.push_back(mwcontam);

  Tool mwfilter;
  mwfilter.name = "mwfilter";
  mwfilter.id = "mwfilter";
  mwfilter.operations = {"mwfilter"};
  mwfilter.type = "tool";
  mwfilter.inputs = {};
  mwfilter.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1505";
  mwfilter.inputs.push_back(ins);
  mwfilter.inTypes.push_back("http://edamontology.org/data_1505");
  sort (mwfilter.inTypes.begin(),mwfilter.inTypes.end());
  mwfilter.output = "http://edamontology.org/data_1505";
  mwfilter.output = "http://edamontology.org/data_0944";
  emboss.push_back(mwfilter);

  Tool needle;
  needle.name = "needle";
  needle.id = "needle";
  needle.operations = {"needle"};
  needle.type = "tool";
  needle.inputs = {};
  needle.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  needle.inputs.push_back(ins);
  needle.inTypes.push_back("http://edamontology.org/data_1381");
  sort (needle.inTypes.begin(),needle.inTypes.end());
  needle.output = "http://edamontology.org/data_0849";
  needle.output = "http://edamontology.org/data_0849";
  needle.output = "http://edamontology.org/data_0874";
  emboss.push_back(needle);

  Tool needle_ebi;
  needle_ebi.name = "needle-ebi";
  needle_ebi.id = "needle-ebi";
  needle_ebi.operations = {"needle-ebi"};
  needle_ebi.type = "tool";
  needle_ebi.inputs = {};
  needle_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  needle_ebi.inputs.push_back(ins);
  needle_ebi.inTypes.push_back("http://edamontology.org/data_1381");
  sort (needle_ebi.inTypes.begin(),needle_ebi.inTypes.end());
  needle_ebi.output = "http://edamontology.org/data_2044";
  emboss.push_back(needle_ebi);

  Tool needleall;
  needleall.name = "needleall";
  needleall.id = "needleall";
  needleall.operations = {"needleall"};
  needleall.type = "tool";
  needleall.inputs = {};
  needleall.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  needleall.inputs.push_back(ins);
  needleall.inTypes.push_back("http://edamontology.org/data_1381");
  sort (needleall.inTypes.begin(),needleall.inTypes.end());
  needleall.output = "http://edamontology.org/data_0849";
  needleall.output = "http://edamontology.org/data_0849";
  needleall.output = "http://edamontology.org/data_0874";
  emboss.push_back(needleall);

  Tool newcpgreport;
  newcpgreport.name = "newcpgreport";
  newcpgreport.id = "newcpgreport";
  newcpgreport.operations = {"newcpgreport"};
  newcpgreport.type = "tool";
  newcpgreport.inputs = {};
  newcpgreport.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  newcpgreport.inputs.push_back(ins);
  newcpgreport.inTypes.push_back("http://edamontology.org/data_1276");
  sort (newcpgreport.inTypes.begin(),newcpgreport.inTypes.end());
  newcpgreport.output = "http://edamontology.org/data_2887";
  emboss.push_back(newcpgreport);

  Tool newcpgseek;
  newcpgseek.name = "newcpgseek";
  newcpgseek.id = "newcpgseek";
  newcpgseek.operations = {"newcpgseek"};
  newcpgseek.type = "tool";
  newcpgseek.inputs = {};
  newcpgseek.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  newcpgseek.inputs.push_back(ins);
  newcpgseek.inTypes.push_back("http://edamontology.org/data_1276");
  sort (newcpgseek.inTypes.begin(),newcpgseek.inTypes.end());
  newcpgseek.output = "http://edamontology.org/data_2887";
  emboss.push_back(newcpgseek);

  Tool newseq;
  newseq.name = "newseq";
  newseq.id = "newseq";
  newseq.operations = {"newseq"};
  newseq.type = "tool";
  newseq.inputs = {};
  newseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  newseq.inputs.push_back(ins);
  newseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (newseq.inTypes.begin(),newseq.inTypes.end());
  emboss.push_back(newseq);

  Tool nohtml;
  nohtml.name = "nohtml";
  nohtml.id = "nohtml";
  nohtml.operations = {"nohtml"};
  nohtml.type = "tool";
  nohtml.inputs = {};
  nohtml.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  nohtml.inputs.push_back(ins);
  nohtml.inTypes.push_back("http://edamontology.org/data_2048");
  sort (nohtml.inTypes.begin(),nohtml.inTypes.end());
  nohtml.output = "http://edamontology.org/data_2048";
  emboss.push_back(nohtml);

  Tool noreturn;
  noreturn.name = "noreturn";
  noreturn.id = "noreturn";
  noreturn.operations = {"noreturn"};
  noreturn.type = "tool";
  noreturn.inputs = {};
  noreturn.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  noreturn.inputs.push_back(ins);
  noreturn.inTypes.push_back("http://edamontology.org/data_2048");
  sort (noreturn.inTypes.begin(),noreturn.inTypes.end());
  noreturn.output = "http://edamontology.org/data_2048";
  emboss.push_back(noreturn);

  Tool nospace;
  nospace.name = "nospace";
  nospace.id = "nospace";
  nospace.operations = {"nospace"};
  nospace.type = "tool";
  nospace.inputs = {};
  nospace.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  nospace.inputs.push_back(ins);
  nospace.inTypes.push_back("http://edamontology.org/data_2048");
  sort (nospace.inTypes.begin(),nospace.inTypes.end());
  nospace.output = "http://edamontology.org/data_2048";
  emboss.push_back(nospace);

  Tool notab;
  notab.name = "notab";
  notab.id = "notab";
  notab.operations = {"notab"};
  notab.type = "tool";
  notab.inputs = {};
  notab.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  notab.inputs.push_back(ins);
  notab.inTypes.push_back("http://edamontology.org/data_2048");
  sort (notab.inTypes.begin(),notab.inTypes.end());
  notab.output = "http://edamontology.org/data_2048";
  emboss.push_back(notab);

  Tool notseq;
  notseq.name = "notseq";
  notseq.id = "notseq";
  notseq.operations = {"notseq"};
  notseq.type = "tool";
  notseq.inputs = {};
  notseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  notseq.inputs.push_back(ins);
  notseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (notseq.inTypes.begin(),notseq.inTypes.end());
  notseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(notseq);

  Tool nthseq;
  nthseq.name = "nthseq";
  nthseq.id = "nthseq";
  nthseq.operations = {"nthseq"};
  nthseq.type = "tool";
  nthseq.inputs = {};
  nthseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  nthseq.inputs.push_back(ins);
  nthseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (nthseq.inTypes.begin(),nthseq.inTypes.end());
  nthseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(nthseq);

  Tool nthseqset;
  nthseqset.name = "nthseqset";
  nthseqset.id = "nthseqset";
  nthseqset.operations = {"nthseqset"};
  nthseqset.type = "tool";
  nthseqset.inputs = {};
  nthseqset.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  nthseqset.inputs.push_back(ins);
  nthseqset.inTypes.push_back("http://edamontology.org/data_0849");
  sort (nthseqset.inTypes.begin(),nthseqset.inTypes.end());
  nthseqset.output = "http://edamontology.org/data_0849";
  emboss.push_back(nthseqset);

  Tool octanol;
  octanol.name = "octanol";
  octanol.id = "octanol";
  octanol.operations = {"octanol"};
  octanol.type = "tool";
  octanol.inputs = {};
  octanol.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1522";
  octanol.inputs.push_back(ins);
  octanol.inTypes.push_back("http://edamontology.org/data_1522");
  sort (octanol.inTypes.begin(),octanol.inTypes.end());
  octanol.output = "http://edamontology.org/data_1507";
  emboss.push_back(octanol);

  Tool oddcomp;
  oddcomp.name = "oddcomp";
  oddcomp.id = "oddcomp";
  oddcomp.operations = {"oddcomp"};
  oddcomp.type = "tool";
  oddcomp.inputs = {};
  oddcomp.inTypes = {};

  sort (oddcomp.inTypes.begin(),oddcomp.inTypes.end());
  oddcomp.output = "http://edamontology.org/data_2886";
  oddcomp.output = "http://edamontology.org/data_1261";
  emboss.push_back(oddcomp);

  Tool ontocount;
  ontocount.name = "ontocount";
  ontocount.id = "ontocount";
  ontocount.operations = {"ontocount"};
  ontocount.type = "tool";
  ontocount.inputs = {};
  ontocount.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  ontocount.inputs.push_back(ins);
  ontocount.inTypes.push_back("http://edamontology.org/data_2223");
  sort (ontocount.inTypes.begin(),ontocount.inTypes.end());
  emboss.push_back(ontocount);

  Tool ontoget;
  ontoget.name = "ontoget";
  ontoget.id = "ontoget";
  ontoget.operations = {"ontoget"};
  ontoget.type = "tool";
  ontoget.inputs = {};
  ontoget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontoget.inputs.push_back(ins);
  ontoget.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontoget.inTypes.begin(),ontoget.inTypes.end());
  emboss.push_back(ontoget);

  Tool ontogetcommon;
  ontogetcommon.name = "ontogetcommon";
  ontogetcommon.id = "ontogetcommon";
  ontogetcommon.operations = {"ontogetcommon"};
  ontogetcommon.type = "tool";
  ontogetcommon.inputs = {};
  ontogetcommon.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetcommon.inputs.push_back(ins);
  ontogetcommon.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetcommon.inTypes.begin(),ontogetcommon.inTypes.end());
  emboss.push_back(ontogetcommon);

  Tool ontogetdown;
  ontogetdown.name = "ontogetdown";
  ontogetdown.id = "ontogetdown";
  ontogetdown.operations = {"ontogetdown"};
  ontogetdown.type = "tool";
  ontogetdown.inputs = {};
  ontogetdown.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetdown.inputs.push_back(ins);
  ontogetdown.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetdown.inTypes.begin(),ontogetdown.inTypes.end());
  emboss.push_back(ontogetdown);

  Tool ontogetobsolete;
  ontogetobsolete.name = "ontogetobsolete";
  ontogetobsolete.id = "ontogetobsolete";
  ontogetobsolete.operations = {"ontogetobsolete"};
  ontogetobsolete.type = "tool";
  ontogetobsolete.inputs = {};
  ontogetobsolete.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetobsolete.inputs.push_back(ins);
  ontogetobsolete.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetobsolete.inTypes.begin(),ontogetobsolete.inTypes.end());
  emboss.push_back(ontogetobsolete);

  Tool ontogetroot;
  ontogetroot.name = "ontogetroot";
  ontogetroot.id = "ontogetroot";
  ontogetroot.operations = {"ontogetroot"};
  ontogetroot.type = "tool";
  ontogetroot.inputs = {};
  ontogetroot.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetroot.inputs.push_back(ins);
  ontogetroot.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetroot.inTypes.begin(),ontogetroot.inTypes.end());
  emboss.push_back(ontogetroot);

  Tool ontogetsibs;
  ontogetsibs.name = "ontogetsibs";
  ontogetsibs.id = "ontogetsibs";
  ontogetsibs.operations = {"ontogetsibs"};
  ontogetsibs.type = "tool";
  ontogetsibs.inputs = {};
  ontogetsibs.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetsibs.inputs.push_back(ins);
  ontogetsibs.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetsibs.inTypes.begin(),ontogetsibs.inTypes.end());
  emboss.push_back(ontogetsibs);

  Tool ontogetup;
  ontogetup.name = "ontogetup";
  ontogetup.id = "ontogetup";
  ontogetup.operations = {"ontogetup"};
  ontogetup.type = "tool";
  ontogetup.inputs = {};
  ontogetup.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontogetup.inputs.push_back(ins);
  ontogetup.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontogetup.inTypes.begin(),ontogetup.inTypes.end());
  emboss.push_back(ontogetup);

  Tool ontoisobsolete;
  ontoisobsolete.name = "ontoisobsolete";
  ontoisobsolete.id = "ontoisobsolete";
  ontoisobsolete.operations = {"ontoisobsolete"};
  ontoisobsolete.type = "tool";
  ontoisobsolete.inputs = {};
  ontoisobsolete.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2223";
  ontoisobsolete.inputs.push_back(ins);
  ontoisobsolete.inTypes.push_back("http://edamontology.org/data_2223");
  sort (ontoisobsolete.inTypes.begin(),ontoisobsolete.inTypes.end());
  emboss.push_back(ontoisobsolete);

  Tool ontotext;
  ontotext.name = "ontotext";
  ontotext.id = "ontotext";
  ontotext.operations = {"ontotext"};
  ontotext.type = "tool";
  ontotext.inputs = {};
  ontotext.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0966";
  ontotext.inputs.push_back(ins);
  ontotext.inTypes.push_back("http://edamontology.org/data_0966");
  sort (ontotext.inTypes.begin(),ontotext.inTypes.end());
  emboss.push_back(ontotext);

  Tool palindrome;
  palindrome.name = "palindrome";
  palindrome.id = "palindrome";
  palindrome.operations = {"palindrome"};
  palindrome.type = "tool";
  palindrome.inputs = {};
  palindrome.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  palindrome.inputs.push_back(ins);
  palindrome.inTypes.push_back("http://edamontology.org/data_1255");
  sort (palindrome.inTypes.begin(),palindrome.inTypes.end());
  palindrome.output = "http://edamontology.org/data_0849";
  emboss.push_back(palindrome);

  Tool pasteseq;
  pasteseq.name = "pasteseq";
  pasteseq.id = "pasteseq";
  pasteseq.operations = {"pasteseq"};
  pasteseq.type = "tool";
  pasteseq.inputs = {};
  pasteseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  pasteseq.inputs.push_back(ins);
  pasteseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (pasteseq.inTypes.begin(),pasteseq.inTypes.end());
  pasteseq.output = "http://edamontology.org/data_0849";
  pasteseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(pasteseq);

  Tool patmatdb;
  patmatdb.name = "patmatdb";
  patmatdb.id = "patmatdb";
  patmatdb.operations = {"patmatdb"};
  patmatdb.type = "tool";
  patmatdb.inputs = {};
  patmatdb.inTypes = {};

  sort (patmatdb.inTypes.begin(),patmatdb.inTypes.end());
  patmatdb.output = "http://edamontology.org/data_2886";
  emboss.push_back(patmatdb);

  Tool patmatmotifs;
  patmatmotifs.name = "patmatmotifs";
  patmatmotifs.id = "patmatmotifs";
  patmatmotifs.operations = {"patmatmotifs"};
  patmatmotifs.type = "tool";
  patmatmotifs.inputs = {};
  patmatmotifs.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  patmatmotifs.inputs.push_back(ins);
  patmatmotifs.inTypes.push_back("http://edamontology.org/data_1255");
  sort (patmatmotifs.inTypes.begin(),patmatmotifs.inTypes.end());
  patmatmotifs.output = "http://edamontology.org/data_0849";
  emboss.push_back(patmatmotifs);

  Tool pepcoil;
  pepcoil.name = "pepcoil";
  pepcoil.id = "pepcoil";
  pepcoil.operations = {"pepcoil"};
  pepcoil.type = "tool";
  pepcoil.inputs = {};
  pepcoil.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  pepcoil.inputs.push_back(ins);
  pepcoil.inTypes.push_back("http://edamontology.org/data_1277");
  sort (pepcoil.inTypes.begin(),pepcoil.inTypes.end());
  pepcoil.output = "http://edamontology.org/data_2886";
  emboss.push_back(pepcoil);

  Tool pepdigest;
  pepdigest.name = "pepdigest";
  pepdigest.id = "pepdigest";
  pepdigest.operations = {"pepdigest"};
  pepdigest.type = "tool";
  pepdigest.inputs = {};
  pepdigest.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  pepdigest.inputs.push_back(ins);
  pepdigest.inTypes.push_back("http://edamontology.org/data_1277");
  sort (pepdigest.inTypes.begin(),pepdigest.inTypes.end());
  pepdigest.output = "http://edamontology.org/data_0849";
  pepdigest.output = "http://edamontology.org/data_1505";
  emboss.push_back(pepdigest);

  Tool pepinfo;
  pepinfo.name = "pepinfo";
  pepinfo.id = "pepinfo";
  pepinfo.operations = {"pepinfo"};
  pepinfo.type = "tool";
  pepinfo.inputs = {};
  pepinfo.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1522";
  pepinfo.inputs.push_back(ins);
  pepinfo.inTypes.push_back("http://edamontology.org/data_1522");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0897";
  pepinfo.inputs.push_back(ins);
  pepinfo.inTypes.push_back("http://edamontology.org/data_0897");
  sort (pepinfo.inTypes.begin(),pepinfo.inTypes.end());
  pepinfo.output = "http://edamontology.org/data_2886";
  pepinfo.output = "http://edamontology.org/data_1502";
  pepinfo.output = "http://edamontology.org/data_1506";
  emboss.push_back(pepinfo);

  Tool pepinfo_ebi;
  pepinfo_ebi.name = "pepinfo-ebi";
  pepinfo_ebi.id = "pepinfo-ebi";
  pepinfo_ebi.operations = {"pepinfo-ebi"};
  pepinfo_ebi.type = "tool";
  pepinfo_ebi.inputs = {};
  pepinfo_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0897";
  pepinfo_ebi.inputs.push_back(ins);
  pepinfo_ebi.inTypes.push_back("http://edamontology.org/data_0897");
  sort (pepinfo_ebi.inTypes.begin(),pepinfo_ebi.inTypes.end());
  pepinfo_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(pepinfo_ebi);

  Tool pepnet;
  pepnet.name = "pepnet";
  pepnet.id = "pepnet";
  pepnet.operations = {"pepnet"};
  pepnet.type = "tool";
  pepnet.inputs = {};
  pepnet.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2163";
  pepnet.inputs.push_back(ins);
  pepnet.inTypes.push_back("http://edamontology.org/data_2163");
  sort (pepnet.inTypes.begin(),pepnet.inTypes.end());
  pepnet.output = "http://edamontology.org/data_0849";
  emboss.push_back(pepnet);

  Tool pepstats;
  pepstats.name = "pepstats";
  pepstats.id = "pepstats";
  pepstats.operations = {"pepstats"};
  pepstats.type = "tool";
  pepstats.inputs = {};
  pepstats.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0897";
  pepstats.inputs.push_back(ins);
  pepstats.inTypes.push_back("http://edamontology.org/data_0897");
  sort (pepstats.inTypes.begin(),pepstats.inTypes.end());
  pepstats.output = "http://edamontology.org/data_2886";
  pepstats.output = "http://edamontology.org/data_1502";
  pepstats.output = "http://edamontology.org/data_1505";
  emboss.push_back(pepstats);

  Tool pepstats_ebi;
  pepstats_ebi.name = "pepstats-ebi";
  pepstats_ebi.id = "pepstats-ebi";
  pepstats_ebi.operations = {"pepstats-ebi"};
  pepstats_ebi.type = "tool";
  pepstats_ebi.inputs = {};
  pepstats_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0897";
  pepstats_ebi.inputs.push_back(ins);
  pepstats_ebi.inTypes.push_back("http://edamontology.org/data_0897");
  sort (pepstats_ebi.inTypes.begin(),pepstats_ebi.inTypes.end());
  pepstats_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(pepstats_ebi);

  Tool pepwheel;
  pepwheel.name = "pepwheel";
  pepwheel.id = "pepwheel";
  pepwheel.operations = {"pepwheel"};
  pepwheel.type = "tool";
  pepwheel.inputs = {};
  pepwheel.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2162";
  pepwheel.inputs.push_back(ins);
  pepwheel.inTypes.push_back("http://edamontology.org/data_2162");
  sort (pepwheel.inTypes.begin(),pepwheel.inTypes.end());
  pepwheel.output = "http://edamontology.org/data_0849";
  emboss.push_back(pepwheel);

  Tool pepwindow;
  pepwindow.name = "pepwindow";
  pepwindow.id = "pepwindow";
  pepwindow.operations = {"pepwindow"};
  pepwindow.type = "tool";
  pepwindow.inputs = {};
  pepwindow.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1522";
  pepwindow.inputs.push_back(ins);
  pepwindow.inTypes.push_back("http://edamontology.org/data_1522");
  sort (pepwindow.inTypes.begin(),pepwindow.inTypes.end());
  pepwindow.output = "http://edamontology.org/data_2886";
  pepwindow.output = "http://edamontology.org/data_1501";
  emboss.push_back(pepwindow);

  Tool pepwindow_ebi;
  pepwindow_ebi.name = "pepwindow-ebi";
  pepwindow_ebi.id = "pepwindow-ebi";
  pepwindow_ebi.operations = {"pepwindow-ebi"};
  pepwindow_ebi.type = "tool";
  pepwindow_ebi.inputs = {};
  pepwindow_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1522";
  pepwindow_ebi.inputs.push_back(ins);
  pepwindow_ebi.inTypes.push_back("http://edamontology.org/data_1522");
  sort (pepwindow_ebi.inTypes.begin(),pepwindow_ebi.inTypes.end());
  pepwindow_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(pepwindow_ebi);

  Tool pepwindowall;
  pepwindowall.name = "pepwindowall";
  pepwindowall.id = "pepwindowall";
  pepwindowall.operations = {"pepwindowall"};
  pepwindowall.type = "tool";
  pepwindowall.inputs = {};
  pepwindowall.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1522";
  pepwindowall.inputs.push_back(ins);
  pepwindowall.inTypes.push_back("http://edamontology.org/data_1522");
  sort (pepwindowall.inTypes.begin(),pepwindowall.inTypes.end());
  pepwindowall.output = "http://edamontology.org/data_1384";
  pepwindowall.output = "http://edamontology.org/data_1501";
  emboss.push_back(pepwindowall);

  Tool plotcon;
  plotcon.name = "plotcon";
  plotcon.id = "plotcon";
  plotcon.operations = {"plotcon"};
  plotcon.type = "tool";
  plotcon.inputs = {};
  plotcon.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2161";
  plotcon.inputs.push_back(ins);
  plotcon.inTypes.push_back("http://edamontology.org/data_2161");
  sort (plotcon.inTypes.begin(),plotcon.inTypes.end());
  plotcon.output = "http://edamontology.org/data_0863";
  plotcon.output = "http://edamontology.org/data_0874";
  emboss.push_back(plotcon);

  Tool plotorf;
  plotorf.name = "plotorf";
  plotorf.id = "plotorf";
  plotorf.operations = {"plotorf"};
  plotorf.type = "tool";
  plotorf.inputs = {};
  plotorf.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  plotorf.inputs.push_back(ins);
  plotorf.inTypes.push_back("http://edamontology.org/data_1276");
  sort (plotorf.inTypes.begin(),plotorf.inTypes.end());
  plotorf.output = "http://edamontology.org/data_2887";
  emboss.push_back(plotorf);

  Tool polydot;
  polydot.name = "polydot";
  polydot.id = "polydot";
  polydot.operations = {"polydot"};
  polydot.type = "tool";
  polydot.inputs = {};
  polydot.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  polydot.inputs.push_back(ins);
  polydot.inTypes.push_back("http://edamontology.org/data_1255");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0862";
  polydot.inputs.push_back(ins);
  polydot.inTypes.push_back("http://edamontology.org/data_0862");
  sort (polydot.inTypes.begin(),polydot.inTypes.end());
  polydot.output = "http://edamontology.org/data_0849";
  emboss.push_back(polydot);

  Tool preg;
  preg.name = "preg";
  preg.id = "preg";
  preg.operations = {"preg"};
  preg.type = "tool";
  preg.inputs = {};
  preg.inTypes = {};

  sort (preg.inTypes.begin(),preg.inTypes.end());
  preg.output = "http://edamontology.org/data_2886";
  preg.output = "http://edamontology.org/data_1352";
  emboss.push_back(preg);

  Tool prettyplot;
  prettyplot.name = "prettyplot";
  prettyplot.id = "prettyplot";
  prettyplot.operations = {"prettyplot"};
  prettyplot.type = "tool";
  prettyplot.inputs = {};
  prettyplot.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1711";
  prettyplot.inputs.push_back(ins);
  prettyplot.inTypes.push_back("http://edamontology.org/data_1711");
  sort (prettyplot.inTypes.begin(),prettyplot.inTypes.end());
  prettyplot.output = "http://edamontology.org/data_0863";
  prettyplot.output = "http://edamontology.org/data_0874";
  emboss.push_back(prettyplot);

  Tool prettyseq;
  prettyseq.name = "prettyseq";
  prettyseq.id = "prettyseq";
  prettyseq.operations = {"prettyseq"};
  prettyseq.type = "tool";
  prettyseq.inputs = {};
  prettyseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  prettyseq.inputs.push_back(ins);
  prettyseq.inTypes.push_back("http://edamontology.org/data_1276");
  sort (prettyseq.inTypes.begin(),prettyseq.inTypes.end());
  prettyseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(prettyseq);

  Tool primersearch;
  primersearch.name = "primersearch";
  primersearch.id = "primersearch";
  primersearch.operations = {"primersearch"};
  primersearch.type = "tool";
  primersearch.inputs = {};
  primersearch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  primersearch.inputs.push_back(ins);
  primersearch.inTypes.push_back("http://edamontology.org/data_1276");
  sort (primersearch.inTypes.begin(),primersearch.inTypes.end());
  primersearch.output = "http://edamontology.org/data_2887";
  primersearch.output = "http://edamontology.org/data_0850";
  emboss.push_back(primersearch);

  Tool printsextract;
  printsextract.name = "printsextract";
  printsextract.id = "printsextract";
  printsextract.operations = {"printsextract"};
  printsextract.type = "tool";
  printsextract.inputs = {};
  printsextract.inTypes = {};

  sort (printsextract.inTypes.begin(),printsextract.inTypes.end());
  printsextract.output = "http://edamontology.org/data_1365";
  emboss.push_back(printsextract);

  Tool profit;
  profit.name = "profit";
  profit.id = "profit";
  profit.operations = {"profit"};
  profit.type = "tool";
  profit.inputs = {};
  profit.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0869";
  profit.inputs.push_back(ins);
  profit.inTypes.push_back("http://edamontology.org/data_0869");
  sort (profit.inTypes.begin(),profit.inTypes.end());
  profit.output = "http://edamontology.org/data_1354";
  profit.output = "http://edamontology.org/data_0849";
  emboss.push_back(profit);

  Tool prophet;
  prophet.name = "prophet";
  prophet.id = "prophet";
  prophet.operations = {"prophet"};
  prophet.type = "tool";
  prophet.inputs = {};
  prophet.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0863";
  prophet.inputs.push_back(ins);
  prophet.inTypes.push_back("http://edamontology.org/data_0863");
  sort (prophet.inTypes.begin(),prophet.inTypes.end());
  prophet.output = "http://edamontology.org/data_0849";
  prophet.output = "http://edamontology.org/data_1354";
  emboss.push_back(prophet);

  Tool prosextract;
  prosextract.name = "prosextract";
  prosextract.id = "prosextract";
  prosextract.operations = {"prosextract"};
  prosextract.type = "tool";
  prosextract.inputs = {};
  prosextract.inTypes = {};

  sort (prosextract.inTypes.begin(),prosextract.inTypes.end());
  prosextract.output = "http://edamontology.org/data_1353";
  emboss.push_back(prosextract);

  Tool pscan;
  pscan.name = "pscan";
  pscan.id = "pscan";
  pscan.operations = {"pscan"};
  pscan.type = "tool";
  pscan.inputs = {};
  pscan.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0869";
  pscan.inputs.push_back(ins);
  pscan.inTypes.push_back("http://edamontology.org/data_0869");
  sort (pscan.inTypes.begin(),pscan.inTypes.end());
  pscan.output = "http://edamontology.org/data_2886";
  emboss.push_back(pscan);

  Tool psiphi;
  psiphi.name = "psiphi";
  psiphi.id = "psiphi";
  psiphi.operations = {"psiphi"};
  psiphi.type = "tool";
  psiphi.inputs = {};
  psiphi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1544";
  psiphi.inputs.push_back(ins);
  psiphi.inTypes.push_back("http://edamontology.org/data_1544");
  sort (psiphi.inTypes.begin(),psiphi.inTypes.end());
  psiphi.output = "http://edamontology.org/data_1460";
  emboss.push_back(psiphi);

  Tool rebaseextract;
  rebaseextract.name = "rebaseextract";
  rebaseextract.id = "rebaseextract";
  rebaseextract.operations = {"rebaseextract"};
  rebaseextract.type = "tool";
  rebaseextract.inputs = {};
  rebaseextract.inTypes = {};

  sort (rebaseextract.inTypes.begin(),rebaseextract.inTypes.end());
  emboss.push_back(rebaseextract);

  Tool recoder;
  recoder.name = "recoder";
  recoder.id = "recoder";
  recoder.operations = {"recoder"};
  recoder.type = "tool";
  recoder.inputs = {};
  recoder.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  recoder.inputs.push_back(ins);
  recoder.inTypes.push_back("http://edamontology.org/data_1276");
  sort (recoder.inTypes.begin(),recoder.inTypes.end());
  recoder.output = "http://edamontology.org/data_0849";
  emboss.push_back(recoder);

  Tool redata;
  redata.name = "redata";
  redata.id = "redata";
  redata.operations = {"redata"};
  redata.type = "tool";
  redata.inputs = {};
  redata.inTypes = {};

  sort (redata.inTypes.begin(),redata.inTypes.end());
  emboss.push_back(redata);

  Tool refseqget;
  refseqget.name = "refseqget";
  refseqget.id = "refseqget";
  refseqget.operations = {"refseqget"};
  refseqget.type = "tool";
  refseqget.inputs = {};
  refseqget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  refseqget.inputs.push_back(ins);
  refseqget.inTypes.push_back("http://edamontology.org/data_0849");
  sort (refseqget.inTypes.begin(),refseqget.inTypes.end());
  refseqget.output = "http://edamontology.org/data_0849";
  emboss.push_back(refseqget);

  Tool remap;
  remap.name = "remap";
  remap.id = "remap";
  remap.operations = {"remap"};
  remap.type = "tool";
  remap.inputs = {};
  remap.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  remap.inputs.push_back(ins);
  remap.inTypes.push_back("http://edamontology.org/data_1276");
  sort (remap.inTypes.begin(),remap.inTypes.end());
  remap.output = "http://edamontology.org/data_2887";
  remap.output = "http://edamontology.org/data_1289";
  emboss.push_back(remap);

  Tool restover;
  restover.name = "restover";
  restover.id = "restover";
  restover.operations = {"restover"};
  restover.type = "tool";
  restover.inputs = {};
  restover.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  restover.inputs.push_back(ins);
  restover.inTypes.push_back("http://edamontology.org/data_1276");
  sort (restover.inTypes.begin(),restover.inTypes.end());
  restover.output = "http://edamontology.org/data_2887";
  emboss.push_back(restover);

  Tool restrict;
  restrict.name = "restrict";
  restrict.id = "restrict";
  restrict.operations = {"restrict"};
  restrict.type = "tool";
  restrict.inputs = {};
  restrict.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  restrict.inputs.push_back(ins);
  restrict.inTypes.push_back("http://edamontology.org/data_1276");
  sort (restrict.inTypes.begin(),restrict.inTypes.end());
  restrict.output = "http://edamontology.org/data_2887";
  emboss.push_back(restrict);

  Tool revseq;
  revseq.name = "revseq";
  revseq.id = "revseq";
  revseq.operations = {"revseq"};
  revseq.type = "tool";
  revseq.inputs = {};
  revseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  revseq.inputs.push_back(ins);
  revseq.inTypes.push_back("http://edamontology.org/data_2887");
  sort (revseq.inTypes.begin(),revseq.inTypes.end());
  revseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(revseq);

  Tool seealso;
  seealso.name = "seealso";
  seealso.id = "seealso";
  seealso.operations = {"seealso"};
  seealso.type = "tool";
  seealso.inputs = {};
  seealso.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  seealso.inputs.push_back(ins);
  seealso.inTypes.push_back("http://edamontology.org/data_0958");
  sort (seealso.inTypes.begin(),seealso.inTypes.end());
  emboss.push_back(seealso);

  Tool seqcount;
  seqcount.name = "seqcount";
  seqcount.id = "seqcount";
  seqcount.operations = {"seqcount"};
  seqcount.type = "tool";
  seqcount.inputs = {};
  seqcount.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  seqcount.inputs.push_back(ins);
  seqcount.inTypes.push_back("http://edamontology.org/data_2048");
  sort (seqcount.inTypes.begin(),seqcount.inTypes.end());
  seqcount.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqcount);

  Tool seqmatchall;
  seqmatchall.name = "seqmatchall";
  seqmatchall.id = "seqmatchall";
  seqmatchall.operations = {"seqmatchall"};
  seqmatchall.type = "tool";
  seqmatchall.inputs = {};
  seqmatchall.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  seqmatchall.inputs.push_back(ins);
  seqmatchall.inTypes.push_back("http://edamontology.org/data_1381");
  sort (seqmatchall.inTypes.begin(),seqmatchall.inTypes.end());
  seqmatchall.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqmatchall);

  Tool seqret;
  seqret.name = "seqret";
  seqret.id = "seqret";
  seqret.operations = {"seqret"};
  seqret.type = "tool";
  seqret.inputs = {};
  seqret.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  seqret.inputs.push_back(ins);
  seqret.inTypes.push_back("http://edamontology.org/data_0849");
  sort (seqret.inTypes.begin(),seqret.inTypes.end());
  seqret.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqret);

  Tool seqret_ebi;
  seqret_ebi.name = "seqret-ebi";
  seqret_ebi.id = "seqret-ebi";
  seqret_ebi.operations = {"seqret-ebi"};
  seqret_ebi.type = "tool";
  seqret_ebi.inputs = {};
  seqret_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2044";
  seqret_ebi.inputs.push_back(ins);
  seqret_ebi.inTypes.push_back("http://edamontology.org/data_2044");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0863";
  seqret_ebi.inputs.push_back(ins);
  seqret_ebi.inTypes.push_back("http://edamontology.org/data_0863");
  sort (seqret_ebi.inTypes.begin(),seqret_ebi.inTypes.end());
  seqret_ebi.output = "http://edamontology.org/data_2044";
  seqret_ebi.output = "http://edamontology.org/data_0863";
  emboss.push_back(seqret_ebi);

  Tool seqretsetall;
  seqretsetall.name = "seqretsetall";
  seqretsetall.id = "seqretsetall";
  seqretsetall.operations = {"seqretsetall"};
  seqretsetall.type = "tool";
  seqretsetall.inputs = {};
  seqretsetall.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  seqretsetall.inputs.push_back(ins);
  seqretsetall.inTypes.push_back("http://edamontology.org/data_0849");
  sort (seqretsetall.inTypes.begin(),seqretsetall.inTypes.end());
  seqretsetall.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqretsetall);

  Tool seqretsplit;
  seqretsplit.name = "seqretsplit";
  seqretsplit.id = "seqretsplit";
  seqretsplit.operations = {"seqretsplit"};
  seqretsplit.type = "tool";
  seqretsplit.inputs = {};
  seqretsplit.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  seqretsplit.inputs.push_back(ins);
  seqretsplit.inTypes.push_back("http://edamontology.org/data_0849");
  sort (seqretsplit.inTypes.begin(),seqretsplit.inTypes.end());
  seqretsplit.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqretsplit);

  Tool seqxref;
  seqxref.name = "seqxref";
  seqxref.id = "seqxref";
  seqxref.operations = {"seqxref"};
  seqxref.type = "tool";
  seqxref.inputs = {};
  seqxref.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2093";
  seqxref.inputs.push_back(ins);
  seqxref.inTypes.push_back("http://edamontology.org/data_2093");
  sort (seqxref.inTypes.begin(),seqxref.inTypes.end());
  seqxref.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqxref);

  Tool seqxrefget;
  seqxrefget.name = "seqxrefget";
  seqxrefget.id = "seqxrefget";
  seqxrefget.operations = {"seqxrefget"};
  seqxrefget.type = "tool";
  seqxrefget.inputs = {};
  seqxrefget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2093";
  seqxrefget.inputs.push_back(ins);
  seqxrefget.inTypes.push_back("http://edamontology.org/data_2093");
  sort (seqxrefget.inTypes.begin(),seqxrefget.inTypes.end());
  seqxrefget.output = "http://edamontology.org/data_0849";
  emboss.push_back(seqxrefget);

  Tool servertell;
  servertell.name = "servertell";
  servertell.id = "servertell";
  servertell.operations = {"servertell"};
  servertell.type = "tool";
  servertell.inputs = {};
  servertell.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  servertell.inputs.push_back(ins);
  servertell.inTypes.push_back("http://edamontology.org/data_0957");
  sort (servertell.inTypes.begin(),servertell.inTypes.end());
  emboss.push_back(servertell);

  Tool showalign;
  showalign.name = "showalign";
  showalign.id = "showalign";
  showalign.operations = {"showalign"};
  showalign.type = "tool";
  showalign.inputs = {};
  showalign.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0863";
  showalign.inputs.push_back(ins);
  showalign.inTypes.push_back("http://edamontology.org/data_0863");
  sort (showalign.inTypes.begin(),showalign.inTypes.end());
  showalign.output = "http://edamontology.org/data_0863";
  showalign.output = "http://edamontology.org/data_0874";
  emboss.push_back(showalign);

  Tool showdb;
  showdb.name = "showdb";
  showdb.id = "showdb";
  showdb.operations = {"showdb"};
  showdb.type = "tool";
  showdb.inputs = {};
  showdb.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  showdb.inputs.push_back(ins);
  showdb.inTypes.push_back("http://edamontology.org/data_0957");
  sort (showdb.inTypes.begin(),showdb.inTypes.end());
  emboss.push_back(showdb);

  Tool showfeat;
  showfeat.name = "showfeat";
  showfeat.id = "showfeat";
  showfeat.operations = {"showfeat"};
  showfeat.type = "tool";
  showfeat.inputs = {};
  showfeat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  showfeat.inputs.push_back(ins);
  showfeat.inTypes.push_back("http://edamontology.org/data_1255");
  sort (showfeat.inTypes.begin(),showfeat.inTypes.end());
  showfeat.output = "http://edamontology.org/data_0849";
  emboss.push_back(showfeat);

  Tool showorf;
  showorf.name = "showorf";
  showorf.id = "showorf";
  showorf.operations = {"showorf"};
  showorf.type = "tool";
  showorf.inputs = {};
  showorf.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  showorf.inputs.push_back(ins);
  showorf.inTypes.push_back("http://edamontology.org/data_1276");
  sort (showorf.inTypes.begin(),showorf.inTypes.end());
  showorf.output = "http://edamontology.org/data_0849";
  emboss.push_back(showorf);

  Tool showpep;
  showpep.name = "showpep";
  showpep.id = "showpep";
  showpep.operations = {"showpep"};
  showpep.type = "tool";
  showpep.inputs = {};
  showpep.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  showpep.inputs.push_back(ins);
  showpep.inTypes.push_back("http://edamontology.org/data_1277");
  sort (showpep.inTypes.begin(),showpep.inTypes.end());
  showpep.output = "http://edamontology.org/data_2886";
  emboss.push_back(showpep);

  Tool showseq;
  showseq.name = "showseq";
  showseq.id = "showseq";
  showseq.operations = {"showseq"};
  showseq.type = "tool";
  showseq.inputs = {};
  showseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  showseq.inputs.push_back(ins);
  showseq.inTypes.push_back("http://edamontology.org/data_1276");
  sort (showseq.inTypes.begin(),showseq.inTypes.end());
  showseq.output = "http://edamontology.org/data_2887";
  emboss.push_back(showseq);

  Tool showserver;
  showserver.name = "showserver";
  showserver.id = "showserver";
  showserver.operations = {"showserver"};
  showserver.type = "tool";
  showserver.inputs = {};
  showserver.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  showserver.inputs.push_back(ins);
  showserver.inTypes.push_back("http://edamontology.org/data_0957");
  sort (showserver.inTypes.begin(),showserver.inTypes.end());
  emboss.push_back(showserver);

  Tool shuffleseq;
  shuffleseq.name = "shuffleseq";
  shuffleseq.id = "shuffleseq";
  shuffleseq.operations = {"shuffleseq"};
  shuffleseq.type = "tool";
  shuffleseq.inputs = {};
  shuffleseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  shuffleseq.inputs.push_back(ins);
  shuffleseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (shuffleseq.inTypes.begin(),shuffleseq.inTypes.end());
  shuffleseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(shuffleseq);

  Tool sigcleave;
  sigcleave.name = "sigcleave";
  sigcleave.id = "sigcleave";
  sigcleave.operations = {"sigcleave"};
  sigcleave.type = "tool";
  sigcleave.inputs = {};
  sigcleave.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1277";
  sigcleave.inputs.push_back(ins);
  sigcleave.inTypes.push_back("http://edamontology.org/data_1277");
  sort (sigcleave.inTypes.begin(),sigcleave.inTypes.end());
  sigcleave.output = "http://edamontology.org/data_2886";
  emboss.push_back(sigcleave);

  Tool silent;
  silent.name = "silent";
  silent.id = "silent";
  silent.operations = {"silent"};
  silent.type = "tool";
  silent.inputs = {};
  silent.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  silent.inputs.push_back(ins);
  silent.inTypes.push_back("http://edamontology.org/data_1276");
  sort (silent.inTypes.begin(),silent.inTypes.end());
  silent.output = "http://edamontology.org/data_2887";
  emboss.push_back(silent);

  Tool sirna;
  sirna.name = "sirna";
  sirna.id = "sirna";
  sirna.operations = {"sirna"};
  sirna.type = "tool";
  sirna.inputs = {};
  sirna.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  sirna.inputs.push_back(ins);
  sirna.inTypes.push_back("http://edamontology.org/data_1276");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2887";
  sirna.inputs.push_back(ins);
  sirna.inTypes.push_back("http://edamontology.org/data_2887");
  sort (sirna.inTypes.begin(),sirna.inTypes.end());
  sirna.output = "http://edamontology.org/data_2887";
  emboss.push_back(sirna);

  Tool sixpack;
  sixpack.name = "sixpack";
  sixpack.id = "sixpack";
  sixpack.operations = {"sixpack"};
  sixpack.type = "tool";
  sixpack.inputs = {};
  sixpack.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  sixpack.inputs.push_back(ins);
  sixpack.inTypes.push_back("http://edamontology.org/data_1276");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2886";
  sixpack.inputs.push_back(ins);
  sixpack.inTypes.push_back("http://edamontology.org/data_2886");
  sort (sixpack.inTypes.begin(),sixpack.inTypes.end());
  sixpack.output = "http://edamontology.org/data_0849";
  emboss.push_back(sixpack);

  Tool sixpack_ebi;
  sixpack_ebi.name = "sixpack-ebi";
  sixpack_ebi.id = "sixpack-ebi";
  sixpack_ebi.operations = {"sixpack-ebi"};
  sixpack_ebi.type = "tool";
  sixpack_ebi.inputs = {};
  sixpack_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2976";
  sixpack_ebi.inputs.push_back(ins);
  sixpack_ebi.inTypes.push_back("http://edamontology.org/data_2976");
  sort (sixpack_ebi.inTypes.begin(),sixpack_ebi.inTypes.end());
  sixpack_ebi.output = "http://edamontology.org/data_2977";
  emboss.push_back(sixpack_ebi);

  Tool sizeseq;
  sizeseq.name = "sizeseq";
  sizeseq.id = "sizeseq";
  sizeseq.operations = {"sizeseq"};
  sizeseq.type = "tool";
  sizeseq.inputs = {};
  sizeseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  sizeseq.inputs.push_back(ins);
  sizeseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (sizeseq.inTypes.begin(),sizeseq.inTypes.end());
  sizeseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(sizeseq);

  Tool skipredundant;
  skipredundant.name = "skipredundant";
  skipredundant.id = "skipredundant";
  skipredundant.operations = {"skipredundant"};
  skipredundant.type = "tool";
  skipredundant.inputs = {};
  skipredundant.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  skipredundant.inputs.push_back(ins);
  skipredundant.inTypes.push_back("http://edamontology.org/data_0849");
  sort (skipredundant.inTypes.begin(),skipredundant.inTypes.end());
  skipredundant.output = "http://edamontology.org/data_0849";
  skipredundant.output = "http://edamontology.org/data_0874";
  emboss.push_back(skipredundant);

  Tool skipseq;
  skipseq.name = "skipseq";
  skipseq.id = "skipseq";
  skipseq.operations = {"skipseq"};
  skipseq.type = "tool";
  skipseq.inputs = {};
  skipseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  skipseq.inputs.push_back(ins);
  skipseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (skipseq.inTypes.begin(),skipseq.inTypes.end());
  skipseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(skipseq);

  Tool splitsource;
  splitsource.name = "splitsource";
  splitsource.id = "splitsource";
  splitsource.operations = {"splitsource"};
  splitsource.type = "tool";
  splitsource.inputs = {};
  splitsource.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  splitsource.inputs.push_back(ins);
  splitsource.inTypes.push_back("http://edamontology.org/data_0849");
  sort (splitsource.inTypes.begin(),splitsource.inTypes.end());
  splitsource.output = "http://edamontology.org/data_0849";
  emboss.push_back(splitsource);

  Tool splitter;
  splitter.name = "splitter";
  splitter.id = "splitter";
  splitter.operations = {"splitter"};
  splitter.type = "tool";
  splitter.inputs = {};
  splitter.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  splitter.inputs.push_back(ins);
  splitter.inTypes.push_back("http://edamontology.org/data_0849");
  sort (splitter.inTypes.begin(),splitter.inTypes.end());
  splitter.output = "http://edamontology.org/data_0849";
  emboss.push_back(splitter);

  Tool stretcher;
  stretcher.name = "stretcher";
  stretcher.id = "stretcher";
  stretcher.operations = {"stretcher"};
  stretcher.type = "tool";
  stretcher.inputs = {};
  stretcher.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  stretcher.inputs.push_back(ins);
  stretcher.inTypes.push_back("http://edamontology.org/data_1381");
  sort (stretcher.inTypes.begin(),stretcher.inTypes.end());
  stretcher.output = "http://edamontology.org/data_0849";
  stretcher.output = "http://edamontology.org/data_0849";
  stretcher.output = "http://edamontology.org/data_0874";
  emboss.push_back(stretcher);

  Tool stretcher_ebi;
  stretcher_ebi.name = "stretcher-ebi";
  stretcher_ebi.id = "stretcher-ebi";
  stretcher_ebi.operations = {"stretcher-ebi"};
  stretcher_ebi.type = "tool";
  stretcher_ebi.inputs = {};
  stretcher_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  stretcher_ebi.inputs.push_back(ins);
  stretcher_ebi.inTypes.push_back("http://edamontology.org/data_1381");
  sort (stretcher_ebi.inTypes.begin(),stretcher_ebi.inTypes.end());
  stretcher_ebi.output = "http://edamontology.org/data_2044";
  emboss.push_back(stretcher_ebi);

  Tool stssearch;
  stssearch.name = "stssearch";
  stssearch.id = "stssearch";
  stssearch.operations = {"stssearch"};
  stssearch.type = "tool";
  stssearch.inputs = {};
  stssearch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  stssearch.inputs.push_back(ins);
  stssearch.inTypes.push_back("http://edamontology.org/data_1276");
  sort (stssearch.inTypes.begin(),stssearch.inTypes.end());
  stssearch.output = "http://edamontology.org/data_2887";
  stssearch.output = "http://edamontology.org/data_0850";
  emboss.push_back(stssearch);

  Tool supermatcher;
  supermatcher.name = "supermatcher";
  supermatcher.id = "supermatcher";
  supermatcher.operations = {"supermatcher"};
  supermatcher.type = "tool";
  supermatcher.inputs = {};
  supermatcher.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  supermatcher.inputs.push_back(ins);
  supermatcher.inTypes.push_back("http://edamontology.org/data_1381");
  sort (supermatcher.inTypes.begin(),supermatcher.inTypes.end());
  supermatcher.output = "http://edamontology.org/data_0849";
  supermatcher.output = "http://edamontology.org/data_0849";
  supermatcher.output = "http://edamontology.org/data_0874";
  emboss.push_back(supermatcher);

  Tool syco;
  syco.name = "syco";
  syco.id = "syco";
  syco.operations = {"syco"};
  syco.type = "tool";
  syco.inputs = {};
  syco.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1600";
  syco.inputs.push_back(ins);
  syco.inTypes.push_back("http://edamontology.org/data_1600");
  sort (syco.inTypes.begin(),syco.inTypes.end());
  syco.output = "http://edamontology.org/data_0849";
  syco.output = "http://edamontology.org/data_1597";
  emboss.push_back(syco);

  Tool taxget;
  taxget.name = "taxget";
  taxget.id = "taxget";
  taxget.operations = {"taxget"};
  taxget.type = "tool";
  taxget.inputs = {};
  taxget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2858";
  taxget.inputs.push_back(ins);
  taxget.inTypes.push_back("http://edamontology.org/data_2858");
  sort (taxget.inTypes.begin(),taxget.inTypes.end());
  emboss.push_back(taxget);

  Tool taxgetdown;
  taxgetdown.name = "taxgetdown";
  taxgetdown.id = "taxgetdown";
  taxgetdown.operations = {"taxgetdown"};
  taxgetdown.type = "tool";
  taxgetdown.inputs = {};
  taxgetdown.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2858";
  taxgetdown.inputs.push_back(ins);
  taxgetdown.inTypes.push_back("http://edamontology.org/data_2858");
  sort (taxgetdown.inTypes.begin(),taxgetdown.inTypes.end());
  emboss.push_back(taxgetdown);

  Tool taxgetrank;
  taxgetrank.name = "taxgetrank";
  taxgetrank.id = "taxgetrank";
  taxgetrank.operations = {"taxgetrank"};
  taxgetrank.type = "tool";
  taxgetrank.inputs = {};
  taxgetrank.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2858";
  taxgetrank.inputs.push_back(ins);
  taxgetrank.inTypes.push_back("http://edamontology.org/data_2858");
  sort (taxgetrank.inTypes.begin(),taxgetrank.inTypes.end());
  emboss.push_back(taxgetrank);

  Tool taxgetspecies;
  taxgetspecies.name = "taxgetspecies";
  taxgetspecies.id = "taxgetspecies";
  taxgetspecies.operations = {"taxgetspecies"};
  taxgetspecies.type = "tool";
  taxgetspecies.inputs = {};
  taxgetspecies.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2858";
  taxgetspecies.inputs.push_back(ins);
  taxgetspecies.inTypes.push_back("http://edamontology.org/data_2858");
  sort (taxgetspecies.inTypes.begin(),taxgetspecies.inTypes.end());
  emboss.push_back(taxgetspecies);

  Tool taxgetup;
  taxgetup.name = "taxgetup";
  taxgetup.id = "taxgetup";
  taxgetup.operations = {"taxgetup"};
  taxgetup.type = "tool";
  taxgetup.inputs = {};
  taxgetup.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2858";
  taxgetup.inputs.push_back(ins);
  taxgetup.inTypes.push_back("http://edamontology.org/data_2858");
  sort (taxgetup.inTypes.begin(),taxgetup.inTypes.end());
  emboss.push_back(taxgetup);

  Tool tcode;
  tcode.name = "tcode";
  tcode.id = "tcode";
  tcode.operations = {"tcode"};
  tcode.type = "tool";
  tcode.inputs = {};
  tcode.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1276";
  tcode.inputs.push_back(ins);
  tcode.inTypes.push_back("http://edamontology.org/data_1276");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_2160";
  tcode.inputs.push_back(ins);
  tcode.inTypes.push_back("http://edamontology.org/data_2160");
  sort (tcode.inTypes.begin(),tcode.inTypes.end());
  tcode.output = "http://edamontology.org/data_2887";
  tcode.output = "http://edamontology.org/data_0914";
  emboss.push_back(tcode);

  Tool textget;
  textget.name = "textget";
  textget.id = "textget";
  textget.operations = {"textget"};
  textget.type = "tool";
  textget.inputs = {};
  textget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  textget.inputs.push_back(ins);
  textget.inTypes.push_back("http://edamontology.org/data_0957");
  sort (textget.inTypes.begin(),textget.inTypes.end());
  textget.output = "http://edamontology.org/data_0957";
  emboss.push_back(textget);

  Tool textsearch;
  textsearch.name = "textsearch";
  textsearch.id = "textsearch";
  textsearch.operations = {"textsearch"};
  textsearch.type = "tool";
  textsearch.inputs = {};
  textsearch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_3756";
  textsearch.inputs.push_back(ins);
  textsearch.inTypes.push_back("http://edamontology.org/data_3756");
  sort (textsearch.inTypes.begin(),textsearch.inTypes.end());
  textsearch.output = "http://edamontology.org/data_0849";
  emboss.push_back(textsearch);

  Tool tfextract;
  tfextract.name = "tfextract";
  tfextract.id = "tfextract";
  tfextract.operations = {"tfextract"};
  tfextract.type = "tool";
  tfextract.inputs = {};
  tfextract.inTypes = {};

  sort (tfextract.inTypes.begin(),tfextract.inTypes.end());
  tfextract.output = "http://edamontology.org/data_0896";
  emboss.push_back(tfextract);

  Tool tfm;
  tfm.name = "tfm";
  tfm.id = "tfm";
  tfm.operations = {"tfm"};
  tfm.type = "tool";
  tfm.inputs = {};
  tfm.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  tfm.inputs.push_back(ins);
  tfm.inTypes.push_back("http://edamontology.org/data_0958");
  sort (tfm.inTypes.begin(),tfm.inTypes.end());
  emboss.push_back(tfm);

  Tool tfscan;
  tfscan.name = "tfscan";
  tfscan.id = "tfscan";
  tfscan.operations = {"tfscan"};
  tfscan.type = "tool";
  tfscan.inputs = {};
  tfscan.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0916";
  tfscan.inputs.push_back(ins);
  tfscan.inTypes.push_back("http://edamontology.org/data_0916");
  sort (tfscan.inTypes.begin(),tfscan.inTypes.end());
  tfscan.output = "http://edamontology.org/data_2887";
  tfscan.output = "http://edamontology.org/data_0896";
  emboss.push_back(tfscan);

  Tool tranalign;
  tranalign.name = "tranalign";
  tranalign.id = "tranalign";
  tranalign.operations = {"tranalign"};
  tranalign.type = "tool";
  tranalign.inputs = {};
  tranalign.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  tranalign.inputs.push_back(ins);
  tranalign.inTypes.push_back("http://edamontology.org/data_2887");
  sort (tranalign.inTypes.begin(),tranalign.inTypes.end());
  tranalign.output = "http://edamontology.org/data_0849";
  tranalign.output = "http://edamontology.org/data_1384";
  emboss.push_back(tranalign);

  Tool transeq;
  transeq.name = "transeq";
  transeq.id = "transeq";
  transeq.operations = {"transeq"};
  transeq.type = "tool";
  transeq.inputs = {};
  transeq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2886";
  transeq.inputs.push_back(ins);
  transeq.inTypes.push_back("http://edamontology.org/data_2886");
  sort (transeq.inTypes.begin(),transeq.inTypes.end());
  transeq.output = "http://edamontology.org/data_0849";
  emboss.push_back(transeq);

  Tool transeq_ebi;
  transeq_ebi.name = "transeq-ebi";
  transeq_ebi.id = "transeq-ebi";
  transeq_ebi.operations = {"transeq-ebi"};
  transeq_ebi.type = "tool";
  transeq_ebi.inputs = {};
  transeq_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2977";
  transeq_ebi.inputs.push_back(ins);
  transeq_ebi.inTypes.push_back("http://edamontology.org/data_2977");
  sort (transeq_ebi.inTypes.begin(),transeq_ebi.inTypes.end());
  transeq_ebi.output = "http://edamontology.org/data_2976";
  emboss.push_back(transeq_ebi);

  Tool trimest;
  trimest.name = "trimest";
  trimest.id = "trimest";
  trimest.operations = {"trimest"};
  trimest.type = "tool";
  trimest.inputs = {};
  trimest.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  trimest.inputs.push_back(ins);
  trimest.inTypes.push_back("http://edamontology.org/data_2887");
  sort (trimest.inTypes.begin(),trimest.inTypes.end());
  trimest.output = "http://edamontology.org/data_2887";
  emboss.push_back(trimest);

  Tool trimseq;
  trimseq.name = "trimseq";
  trimseq.id = "trimseq";
  trimseq.operations = {"trimseq"};
  trimseq.type = "tool";
  trimseq.inputs = {};
  trimseq.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  trimseq.inputs.push_back(ins);
  trimseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (trimseq.inTypes.begin(),trimseq.inTypes.end());
  trimseq.output = "http://edamontology.org/data_0849";
  emboss.push_back(trimseq);

  Tool trimspace;
  trimspace.name = "trimspace";
  trimspace.id = "trimspace";
  trimspace.operations = {"trimspace"};
  trimspace.type = "tool";
  trimspace.inputs = {};
  trimspace.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2048";
  trimspace.inputs.push_back(ins);
  trimspace.inTypes.push_back("http://edamontology.org/data_2048");
  sort (trimspace.inTypes.begin(),trimspace.inTypes.end());
  trimspace.output = "http://edamontology.org/data_2048";
  emboss.push_back(trimspace);

  Tool twofeat;
  twofeat.name = "twofeat";
  twofeat.id = "twofeat";
  twofeat.operations = {"twofeat"};
  twofeat.type = "tool";
  twofeat.inputs = {};
  twofeat.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1255";
  twofeat.inputs.push_back(ins);
  twofeat.inTypes.push_back("http://edamontology.org/data_1255");
  sort (twofeat.inTypes.begin(),twofeat.inTypes.end());
  twofeat.output = "http://edamontology.org/data_0849";
  emboss.push_back(twofeat);

  Tool emboss_union;
  emboss_union.name = "emboss_union";
  emboss_union.id = "emboss_union";
  emboss_union.operations = {"emboss_union"};
  emboss_union.type = "tool";
  emboss_union.inputs = {};
  emboss_union.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  emboss_union.inputs.push_back(ins);
  emboss_union.inTypes.push_back("http://edamontology.org/data_0849");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_0850";
  emboss_union.inputs.push_back(ins);
  emboss_union.inTypes.push_back("http://edamontology.org/data_0850");
  sort (emboss_union.inTypes.begin(),emboss_union.inTypes.end());
  emboss_union.output = "http://edamontology.org/data_0849";
  emboss.push_back(emboss_union);

  Tool urlget;
  urlget.name = "urlget";
  urlget.id = "urlget";
  urlget.operations = {"urlget"};
  urlget.type = "tool";
  urlget.inputs = {};
  urlget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  urlget.inputs.push_back(ins);
  urlget.inTypes.push_back("http://edamontology.org/data_0957");
  sort (urlget.inTypes.begin(),urlget.inTypes.end());
  urlget.output = "http://edamontology.org/data_0957";
  emboss.push_back(urlget);

  Tool variationget;
  variationget.name = "variationget";
  variationget.id = "variationget";
  variationget.operations = {"variationget"};
  variationget.type = "tool";
  variationget.inputs = {};
  variationget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0849";
  variationget.inputs.push_back(ins);
  variationget.inTypes.push_back("http://edamontology.org/data_0849");
  sort (variationget.inTypes.begin(),variationget.inTypes.end());
  variationget.output = "http://edamontology.org/data_0849";
  emboss.push_back(variationget);

  Tool vectorstrip;
  vectorstrip.name = "vectorstrip";
  vectorstrip.id = "vectorstrip";
  vectorstrip.operations = {"vectorstrip"};
  vectorstrip.type = "tool";
  vectorstrip.inputs = {};
  vectorstrip.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_2887";
  vectorstrip.inputs.push_back(ins);
  vectorstrip.inTypes.push_back("http://edamontology.org/data_2887");
  sort (vectorstrip.inTypes.begin(),vectorstrip.inTypes.end());
  vectorstrip.output = "http://edamontology.org/data_2887";
  vectorstrip.output = "http://edamontology.org/data_0850";
  emboss.push_back(vectorstrip);

  Tool water;
  water.name = "water";
  water.id = "water";
  water.operations = {"water"};
  water.type = "tool";
  water.inputs = {};
  water.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  water.inputs.push_back(ins);
  water.inTypes.push_back("http://edamontology.org/data_1381");
  sort (water.inTypes.begin(),water.inTypes.end());
  water.output = "http://edamontology.org/data_0849";
  water.output = "http://edamontology.org/data_0849";
  water.output = "http://edamontology.org/data_0874";
  emboss.push_back(water);

  Tool water_ebi;
  water_ebi.name = "water-ebi";
  water_ebi.id = "water-ebi";
  water_ebi.operations = {"water-ebi"};
  water_ebi.type = "tool";
  water_ebi.inputs = {};
  water_ebi.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  water_ebi.inputs.push_back(ins);
  water_ebi.inTypes.push_back("http://edamontology.org/data_1381");
  sort (water_ebi.inTypes.begin(),water_ebi.inTypes.end());
  water_ebi.output = "http://edamontology.org/data_2044";
  emboss.push_back(water_ebi);

  Tool whichdb;
  whichdb.name = "whichdb";
  whichdb.id = "whichdb";
  whichdb.operations = {"whichdb"};
  whichdb.type = "tool";
  whichdb.inputs = {};
  whichdb.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  whichdb.inputs.push_back(ins);
  whichdb.inTypes.push_back("http://edamontology.org/data_0957");
  sort (whichdb.inTypes.begin(),whichdb.inTypes.end());
  emboss.push_back(whichdb);

  Tool wobble;
  wobble.name = "wobble";
  wobble.id = "wobble";
  wobble.operations = {"wobble"};
  wobble.type = "tool";
  wobble.inputs = {};
  wobble.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1261";
  wobble.inputs.push_back(ins);
  wobble.inTypes.push_back("http://edamontology.org/data_1261");
  sort (wobble.inTypes.begin(),wobble.inTypes.end());
  wobble.output = "http://edamontology.org/data_2887";
  emboss.push_back(wobble);

  Tool wordcount;
  wordcount.name = "wordcount";
  wordcount.id = "wordcount";
  wordcount.operations = {"wordcount"};
  wordcount.type = "tool";
  wordcount.inputs = {};
  wordcount.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1261";
  wordcount.inputs.push_back(ins);
  wordcount.inTypes.push_back("http://edamontology.org/data_1261");
  sort (wordcount.inTypes.begin(),wordcount.inTypes.end());
  wordcount.output = "http://edamontology.org/data_0849";
  emboss.push_back(wordcount);

  Tool wordfinder;
  wordfinder.name = "wordfinder";
  wordfinder.id = "wordfinder";
  wordfinder.operations = {"wordfinder"};
  wordfinder.type = "tool";
  wordfinder.inputs = {};
  wordfinder.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  wordfinder.inputs.push_back(ins);
  wordfinder.inTypes.push_back("http://edamontology.org/data_1381");
  sort (wordfinder.inTypes.begin(),wordfinder.inTypes.end());
  wordfinder.output = "http://edamontology.org/data_0849";
  wordfinder.output = "http://edamontology.org/data_0849";
  wordfinder.output = "http://edamontology.org/data_0874";
  emboss.push_back(wordfinder);

  Tool wordmatch;
  wordmatch.name = "wordmatch";
  wordmatch.id = "wordmatch";
  wordmatch.operations = {"wordmatch"};
  wordmatch.type = "tool";
  wordmatch.inputs = {};
  wordmatch.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_1381";
  wordmatch.inputs.push_back(ins);
  wordmatch.inTypes.push_back("http://edamontology.org/data_1381");
  ins.label = "output1";
  ins.type = "http://edamontology.org/data_1255";
  wordmatch.inputs.push_back(ins);
  wordmatch.inTypes.push_back("http://edamontology.org/data_1255");
  ins.label = "output2";
  ins.type = "http://edamontology.org/data_1255";
  wordmatch.inputs.push_back(ins);
  wordmatch.inTypes.push_back("http://edamontology.org/data_1255");
  sort (wordmatch.inTypes.begin(),wordmatch.inTypes.end());
  wordmatch.output = "http://edamontology.org/data_0849";
  wordmatch.output = "http://edamontology.org/data_0849";
  emboss.push_back(wordmatch);

  Tool wossdata;
  wossdata.name = "wossdata";
  wossdata.id = "wossdata";
  wossdata.operations = {"wossdata"};
  wossdata.type = "tool";
  wossdata.inputs = {};
  wossdata.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossdata.inputs.push_back(ins);
  wossdata.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossdata.inTypes.begin(),wossdata.inTypes.end());
  emboss.push_back(wossdata);

  Tool wossinput;
  wossinput.name = "wossinput";
  wossinput.id = "wossinput";
  wossinput.operations = {"wossinput"};
  wossinput.type = "tool";
  wossinput.inputs = {};
  wossinput.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossinput.inputs.push_back(ins);
  wossinput.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossinput.inTypes.begin(),wossinput.inTypes.end());
  emboss.push_back(wossinput);

  Tool wossname;
  wossname.name = "wossname";
  wossname.id = "wossname";
  wossname.operations = {"wossname"};
  wossname.type = "tool";
  wossname.inputs = {};
  wossname.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossname.inputs.push_back(ins);
  wossname.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossname.inTypes.begin(),wossname.inTypes.end());
  emboss.push_back(wossname);

  Tool wossoperation;
  wossoperation.name = "wossoperation";
  wossoperation.id = "wossoperation";
  wossoperation.operations = {"wossoperation"};
  wossoperation.type = "tool";
  wossoperation.inputs = {};
  wossoperation.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossoperation.inputs.push_back(ins);
  wossoperation.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossoperation.inTypes.begin(),wossoperation.inTypes.end());
  emboss.push_back(wossoperation);

  Tool wossoutput;
  wossoutput.name = "wossoutput";
  wossoutput.id = "wossoutput";
  wossoutput.operations = {"wossoutput"};
  wossoutput.type = "tool";
  wossoutput.inputs = {};
  wossoutput.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossoutput.inputs.push_back(ins);
  wossoutput.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossoutput.inTypes.begin(),wossoutput.inTypes.end());
  emboss.push_back(wossoutput);

  Tool wossparam;
  wossparam.name = "wossparam";
  wossparam.id = "wossparam";
  wossparam.operations = {"wossparam"};
  wossparam.type = "tool";
  wossparam.inputs = {};
  wossparam.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wossparam.inputs.push_back(ins);
  wossparam.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wossparam.inTypes.begin(),wossparam.inTypes.end());
  emboss.push_back(wossparam);

  Tool wosstopic;
  wosstopic.name = "wosstopic";
  wosstopic.id = "wosstopic";
  wosstopic.operations = {"wosstopic"};
  wosstopic.type = "tool";
  wosstopic.inputs = {};
  wosstopic.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0958";
  wosstopic.inputs.push_back(ins);
  wosstopic.inTypes.push_back("http://edamontology.org/data_0958");
  sort (wosstopic.inTypes.begin(),wosstopic.inTypes.end());
  emboss.push_back(wosstopic);

  Tool xmlget;
  xmlget.name = "xmlget";
  xmlget.id = "xmlget";
  xmlget.operations = {"xmlget"};
  xmlget.type = "tool";
  xmlget.inputs = {};
  xmlget.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  xmlget.inputs.push_back(ins);
  xmlget.inTypes.push_back("http://edamontology.org/data_0957");
  sort (xmlget.inTypes.begin(),xmlget.inTypes.end());
  xmlget.output = "http://edamontology.org/data_0957";
  emboss.push_back(xmlget);

  Tool xmltext;
  xmltext.name = "xmltext";
  xmltext.id = "xmltext";
  xmltext.operations = {"xmltext"};
  xmltext.type = "tool";
  xmltext.inputs = {};
  xmltext.inTypes = {};

  ins.label = "output0";
  ins.type = "http://edamontology.org/data_0957";
  xmltext.inputs.push_back(ins);
  xmltext.inTypes.push_back("http://edamontology.org/data_0957");
  sort (xmltext.inTypes.begin(),xmltext.inTypes.end());
  xmltext.output = "http://edamontology.org/data_0957";
  emboss.push_back(xmltext);

  Tool yank;
  yank.name = "yank";
  yank.id = "yank";
  yank.operations = {"yank"};
  yank.type = "tool";
  yank.inputs = {};
  yank.inTypes = {};

  sort (yank.inTypes.begin(),yank.inTypes.end());
  yank.output = "http://edamontology.org/data_0849";
  emboss.push_back(yank);
  return emboss;
}
