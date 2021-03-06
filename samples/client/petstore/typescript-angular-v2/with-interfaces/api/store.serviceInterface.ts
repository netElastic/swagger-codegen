/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
import { Headers }                                           from '@angular/http';

import { Observable }                                        from 'rxjs/Observable';

import * as models                                           from '../model/models';
import { Configuration }                                     from '../configuration';


export interface StoreServiceInterface {
    defaultHeaders: Headers;
    configuration: Configuration;
    [others: string]: any;

    /**
    * Delete purchase order by ID
    * For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors
    * @param orderId ID of the order that needs to be deleted
    */
    deleteOrder(orderId: string, extraHttpRequestParams?: any): Observable<{}>;

    /**
    * Returns pet inventories by status
    * Returns a map of status codes to quantities
    */
    getInventory(extraHttpRequestParams?: any): Observable<{ [key: string]: number; }>;

    /**
    * Find purchase order by ID
    * For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generated exceptions
    * @param orderId ID of pet that needs to be fetched
    */
    getOrderById(orderId: number, extraHttpRequestParams?: any): Observable<Order>;

    /**
    * Place an order for a pet
    * 
    * @param body order placed for purchasing the pet
    */
    placeOrder(body: Order, extraHttpRequestParams?: any): Observable<Order>;

}
