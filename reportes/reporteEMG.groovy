import net.sf.jasperreports.engine.JREmptyDataSource;
import net.sf.jasperreports.engine.JRException
import net.sf.jasperreports.engine.JasperCompileManager;
import net.sf.jasperreports.engine.JasperExportManager;
import net.sf.jasperreports.engine.JasperFillManager;
import net.sf.jasperreports.engine.JasperPrint;
import net.sf.jasperreports.engine.JasperReport;
import net.sf.jasperreports.engine.util.JRLoader;
import groovy.json.JsonSlurper

//read json
base = System.getProperty("user.dir")
def inputFile = new File(base,"data.json")
def parameters = new JsonSlurper().parseText(inputFile.text)
println parameters["dataList"]
generateReport(parameters)

def generateReport( params ){
    
    def source= "${base}\\testReport.jrxml";
    def jasperFile = "${base}\\testReport.jasper";
    def pdfName = "${base}\\MainReport.pdf"
    
    try{
         JasperCompileManager.compileReportToFile(source, jasperFile);
         def report = (JasperReport)JRLoader.loadObjectFromFile(jasperFile)
         JasperPrint jprint = (JasperPrint)JasperFillManager.fillReport( report, params, new JREmptyDataSource() );
         JasperExportManager.exportReportToPdfFile(jprint, pdfName);
         println "Success"
    }catch (JRException e) {
          println "Error $e"
         //new File(base, "log.dat") << "[generateReport : ]" << LocalDateTime.now() << e.printStackTrace();
    }
    finally{
        println "Finish"
    }
}